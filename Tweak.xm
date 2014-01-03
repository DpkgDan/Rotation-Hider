#import "SBStatusBarStateAggregator.h"

%hook SBStatusBarStateAggregator

-(void)_updateRotationLockItem
{
    return;
}

%end