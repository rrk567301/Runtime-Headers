@class NSString, NSArray;

@interface CATapDescription : NSObject {
    NSArray *_processes;
    BOOL _isMono;
}

@property (retain) NSString *name;
@property (retain) NSString *UUID;
@property BOOL isExclusive;
@property BOOL isAMixdown;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)getProcesses;
- (void)setProcesses:(id)a0;
- (id)initStereoMixdownOfProcessesIDs:(id)a0;
- (id)initStereoGlobalTapButExcludeProcesses:(id)a0;
- (id)generateUID;
- (id)initWithProcessDevicePairs:(id)a0;
- (id)initWithActiveStreamsForProcessDevicePairs:(id)a0;
- (id)initMonoMixdownOfProcessesIDs:(id)a0;
- (id)initMonoGlobalTapButExcludeProcesses:(id)a0;
- (BOOL)isMono;
- (void)setIsMono:(BOOL)a0;

@end
