@class NSObject;
@protocol OS_xpc_object;

@interface AVHapticProcessTaskToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSObject<OS_xpc_object> *taskTokenDictionary;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
