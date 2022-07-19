//
//  SearchUserCell.h
//  meta_capstone
//
//  Created by Nikita Singh on 7/15/22.
//

#import <UIKit/UIKit.h>
#import "Parse/Parse.h"

NS_ASSUME_NONNULL_BEGIN

@interface SearchUserCell : UITableViewCell

@property (strong, nonatomic) IBOutlet UIImageView *profileImage;
@property (strong, nonatomic) IBOutlet UILabel *profileUserLabel;
@property (strong, nonatomic) IBOutlet UIButton *inviteButton;

@property (strong, nonatomic) PFObject *currUser;
@property (nonatomic) BOOL invited;
@property (strong, nonatomic) NSIndexPath *indexPath;


- (void)setCellInfo:(PFObject *)user : (NSIndexPath *)indexPath : (BOOL)invited;


@end

NS_ASSUME_NONNULL_END
