@class NSString;

@interface DSPModuleBasicDescription : NSObject

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) unsigned long long scope;
@property (readonly, nonatomic) unsigned long long ioControllerID;
@property (readonly, nonatomic) struct optional<unsigned int> { union { char __null_state_; unsigned int __val_; } ; BOOL __engaged_; } ioStreamIndex;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithType:(id)a0 scope:(unsigned long long)a1 ioControllerID:(unsigned long long)a2 ioStreamIndex:(struct optional<unsigned int> { union { char x0; unsigned int x1; } x0; BOOL x1; })a3;

@end
