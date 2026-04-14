@protocol SYDClientProtocol;

@interface SYDClientProtocolProxy : NSObject <SYDClientProtocol>

@property (weak, nonatomic) id<SYDClientProtocol> target;

- (id)initWithTarget:(id)a0;
- (void).cxx_destruct;
- (void)storeDidChangeWithStoreID:(id)a0 changeDictionary:(id)a1;

@end
