//
//  LeaderboardViewController.h
//  meta_capstone
//
//  Created by Nikita Singh on 7/5/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LeaderboardViewController : UIViewController

@property (strong, nonatomic) NSMutableArray *usersArray;

- (void)getLeaderboard;

@end

NS_ASSUME_NONNULL_END
