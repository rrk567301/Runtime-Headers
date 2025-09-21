@interface _AMFinderIconFamily : SBObject

@property (readonly, copy) id largeMonochromeIconAndMask;
@property (readonly, copy) id large8BitMask;
@property (readonly, copy) id large32BitIcon;
@property (readonly, copy) id large8BitIcon;
@property (readonly, copy) id large4BitIcon;
@property (readonly, copy) id smallMonochromeIconAndMask;
@property (readonly, copy) id small8BitMask;
@property (readonly, copy) id small32BitIcon;
@property (readonly, copy) id small8BitIcon;
@property (readonly, copy) id small4BitIcon;

- (void)close;
- (void)select;
- (void)activate;
- (id)delete;
- (void)eject;
- (char)exists;
- (void)erase;
- (long long)dataSizeAs:(id)a0;
- (id)duplicateTo:(id)a0 replacing:(char)a1 routingSuppressed:(char)a2;
- (void)emptySecurity:(char)a0;
- (id)moveTo:(id)a0 replacing:(char)a1 positionedAt:(id)a2 routingSuppressed:(char)a3;
- (void)openUsing:(id)a0 withProperties:(id)a1;
- (void)printWithProperties:(id)a0;
- (void)reveal;
- (void)updateNecessity:(char)a0 registeringApplications:(char)a1;

@end
