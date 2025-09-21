@class NSString, NSUUID, NSArray, NSNumber;

@interface CATapDescription : NSObject

@property (copy) NSString *name;
@property (copy) NSUUID *UUID;
@property (copy) NSArray *processes;
@property (getter=isMono) char mono;
@property (getter=isExclusive) char exclusive;
@property (getter=isMixdown) char mixdown;
@property (getter=isPrivate, setter=setPrivate:) char privateTap;
@property (getter=isMuted) long long muteBehavior;
@property (copy) NSString *deviceUID;
@property (copy) NSNumber *stream;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (void)setIsExclusive:(char)a0;
- (id)initExcludingProcesses:(id)a0 andDeviceUID:(id)a1 withStream:(long long)a2;
- (id)initMonoGlobalTapButExcludeProcesses:(id)a0;
- (id)initMonoMixdownOfProcesses:(id)a0;
- (id)initMonoMixdownOfProcessesIDs:(id)a0;
- (id)initStereoGlobalTapButExcludeProcesses:(id)a0;
- (id)initStereoMixdownOfProcesses:(id)a0;
- (id)initStereoMixdownOfProcessesIDs:(id)a0;
- (id)initWithProcesses:(id)a0 andDeviceUID:(id)a1 withStream:(long long)a2;

@end
