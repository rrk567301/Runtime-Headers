@class NSString;

@interface LACAccessControlOperation : NSObject {
    NSString *_aksOp;
}

@property (readonly, nonatomic) long long rawValue;
@property (readonly, nonatomic) NSString *keyOp;

- (void).cxx_destruct;
- (id)initWithTypeErasedOperation:(id)a0;

@end
