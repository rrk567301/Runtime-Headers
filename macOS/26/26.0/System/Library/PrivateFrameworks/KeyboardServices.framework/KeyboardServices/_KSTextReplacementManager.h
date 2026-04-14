@class _KSTextReplacementCKStore, NSString, NSObject;
@protocol _KSTextReplacementSyncProtocol;

@interface _KSTextReplacementManager : NSObject <_KSTextReplacementSyncProtocol>

@property (retain, nonatomic) _KSTextReplacementCKStore *ckStore;
@property (retain, nonatomic) NSObject<_KSTextReplacementSyncProtocol> *textReplacementStore;
@property (copy, nonatomic) NSString *directoryPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textReplacementStoreWithTestDirectory:(id)a0 withDelegate:(id)a1;

- (void)requestSyncWithCompletionBlock:(id /* block */)a0;
- (void)dealloc;
- (void)notifyTextReplacementDidChange;
- (id)forwardingTargetForSelector:(SEL)a0;
- (double)minimumUptimeRemaining;
- (void)requestSync:(unsigned long long)a0 withCompletionBlock:(id /* block */)a1;
- (id)initWithDirectoryPath:(id)a0;
- (void)pushAllLocalRecordsOnceIfNeeded;
- (void)recordSyncStatus;
- (void).cxx_destruct;

@end
