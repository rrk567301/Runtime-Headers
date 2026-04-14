@class NSData;

@interface AAAccessoryFeatureFlagEntry : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned char featureID;
@property (readonly, nonatomic) unsigned char coreID;
@property (readonly, nonatomic) BOOL state;
@property (readonly, nonatomic) NSData *payload;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)messageSize;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)appendMessageToBuffer:(id)a0;
- (id)initWithFeatureID:(unsigned char)a0 coreID:(unsigned char)a1 state:(BOOL)a2 payload:(id)a3;

@end
