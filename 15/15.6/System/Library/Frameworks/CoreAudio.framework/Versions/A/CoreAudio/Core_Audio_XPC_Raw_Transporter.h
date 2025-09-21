@class NSObject;
@protocol OS_xpc_object;

@interface Core_Audio_XPC_Raw_Transporter : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_xpc_object> *object;

+ (id)object:(id)a0;

- (void)dealloc;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
