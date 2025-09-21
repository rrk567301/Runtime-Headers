@class NSString, NSNumber, SBObject;

@interface _AMFinderProcess : SBObject

@property (readonly, copy) NSString *name;
@property char visible;
@property char frontmost;
@property (readonly, copy) SBObject *file;
@property (readonly, copy) NSNumber *fileType;
@property (readonly, copy) NSNumber *creatorType;
@property (readonly) char acceptsHighLevelEvents;
@property (readonly) char acceptsRemoteEvents;
@property (readonly) char hasScriptingTerminology;
@property (readonly) long long totalPartitionSize;
@property (readonly) long long partitionSpaceUsed;

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
