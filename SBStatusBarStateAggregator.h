@class NSArray, NSDateFormatter, NSHashTable, NSString, NSTimer;

@interface SBStatusBarStateAggregator : NSObject

-(void)_updateBatteryItems;
-(void)_updateRotationLockItem;

@end