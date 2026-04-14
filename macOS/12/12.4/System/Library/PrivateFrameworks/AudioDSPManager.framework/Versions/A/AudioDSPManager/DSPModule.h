@class RPBItem, NSString, DSPModuleManager;

@interface DSPModule : NSObject

@property (readonly) RPBItem *remoteProcessingBlockItem;
@property (retain, nonatomic) NSString *type;
@property (readonly, nonatomic) unsigned long long scope;
@property (readonly, nonatomic) unsigned long long ioControllerID;
@property (readonly, nonatomic) struct optional<unsigned int> { union { char __null_state_; unsigned int __val_; } ; BOOL __engaged_; } ioStreamIndex;
@property (readonly, nonatomic) struct vector<adm::DSPModuleParamID, std::allocator<adm::DSPModuleParamID>> { unsigned int *__begin_; unsigned int *__end_; struct __compressed_pair<adm::DSPModuleParamID *, std::allocator<adm::DSPModuleParamID>> { unsigned int *__value_; } __end_cap_; } graphParams;
@property (readonly, weak, nonatomic) DSPModuleManager *manager;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)connectToRemoteProcessingBlock;
- (void)disconnectFromRemoteProcessingBlock;
- (id)initWithType:(id)a0 scope:(unsigned long long)a1 ioControllerID:(unsigned long long)a2 ioStreamIndex:(struct optional<unsigned int> { union { char x0; unsigned int x1; } x0; BOOL x1; })a3 dspModuleManager:(id)a4;
- (id)moduleDescription;
- (id)remoteProcessingBlockItem;
- (void)setRemoteProcessingBlockItem:(id)a0;
- (void)addToRPBHost;
- (void)removeFromRPBHost;

@end
