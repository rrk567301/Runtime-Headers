@interface _AMFinderColumn : SBObject

@property long long index;
@property (readonly) int name;
@property int sortDirection;
@property long long width;
@property (readonly) long long minimumWidth;
@property (readonly) long long maximumWidth;
@property char visible;

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
