//
//  UIKit+Doppelganger.h
//  Pods
//
//  Created by Sash Zats on 1/13/15.
//
//

#import <UIKit/UIKit.h>

@interface UICollectionView (Doppelganger)

- (void)wml_applyBatchChangesForRows:(NSArray *)changes inSection:(NSUInteger)section completion:(void (^)(BOOL))completion;
- (void)wml_applyBatchChangesForSections:(NSArray *)changes completion:(void (^)(BOOL))completion;

@end

@interface UITableView (Doppelganger)

- (void)wml_applyBatchChangesForRows:(NSArray *)changes inSection:(NSUInteger)section withRowAnimation:(UITableViewRowAnimation)animation;
- (void)wml_applyBatchChangesForSections:(NSArray *)changes withRowAnimation:(UITableViewRowAnimation)animation;

@end
