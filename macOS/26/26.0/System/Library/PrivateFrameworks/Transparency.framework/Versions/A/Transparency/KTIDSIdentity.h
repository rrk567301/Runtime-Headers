@class NSData;

@interface KTIDSIdentity : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSData *pushToken;
@property (retain) NSData *signature;
@property (retain) NSData *ktLoggableData;
@property BOOL ktCapable;
@property BOOL supportConditionalEnforcement;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPushToken:(id)a0 ktLoggableData:(id)a1 signature:(id)a2 ktCapable:(BOOL)a3;
- (id)initWithPushToken:(id)a0 ktLoggableData:(id)a1 signature:(id)a2 ktCapable:(BOOL)a3 conditionalEnforcement:(BOOL)a4;

@end
