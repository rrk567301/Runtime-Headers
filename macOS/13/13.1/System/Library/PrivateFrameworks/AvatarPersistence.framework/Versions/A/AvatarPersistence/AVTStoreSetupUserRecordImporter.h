@class AVTCoreEnvironment;
@protocol AVTUILogger, AVTStoreBackend;

@interface AVTStoreSetupUserRecordImporter : NSObject

@property (readonly, nonatomic) id<AVTUILogger> logger;
@property (readonly, nonatomic) AVTCoreEnvironment *environment;
@property (readonly, nonatomic) id<AVTStoreBackend> backend;

- (void).cxx_destruct;
- (id)initWithEnvironment:(id)a0 backend:(id)a1;
- (id)urlForSetupUserMemojiData;
- (void)importSetupUserDrafts;
- (void)removeSetupUserMemojiData;

@end
