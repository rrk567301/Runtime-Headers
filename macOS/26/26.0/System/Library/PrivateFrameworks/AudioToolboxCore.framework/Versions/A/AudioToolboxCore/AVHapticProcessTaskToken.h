@class NSObject;
@protocol OS_xpc_object;

@interface AVHapticProcessTaskToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSObject<OS_xpc_object> *taskTokenDictionary;

- (id)initWithXPCDictionary:(id)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
