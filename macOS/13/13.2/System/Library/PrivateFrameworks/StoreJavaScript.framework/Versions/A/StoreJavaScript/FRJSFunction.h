@class NSUUID;
@protocol FRJSMessagingDelegate;

@interface FRJSFunction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct OpaqueJSValue { } *jsFunction;
@property (readonly, nonatomic) struct OpaqueJSContext { } *jsContext;
@property (readonly, nonatomic) NSUUID *functionID;
@property (nonatomic) BOOL capture;
@property (weak, nonatomic) id<FRJSMessagingDelegate> messagingDelegate;

+ (id)functionForIdentifier:(id)a0;
+ (id)functionForJSFunction:(struct OpaqueJSValue { } *)a0 inContext:(struct OpaqueJSContext { } *)a1;
+ (void)addFunctionToGlobalCache:(id)a0;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)callWithArguments:(id)a0;
- (void)doAction:(id)a0;
- (id)initWithJavaScriptFunction:(struct OpaqueJSValue { } *)a0 inContext:(struct OpaqueJSContext { } *)a1;
- (void)protect;
- (void)unprotect;
- (struct OpaqueJSValue { } *)jsObjectInContext:(struct OpaqueJSContext { } *)a0;

@end
