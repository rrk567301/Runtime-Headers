@class NSString;

@interface WFCommunicationMethod : NSObject

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *type;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id)a0;
- (long long)callCapability;
- (long long)preferredCallProvider;
- (id)initWithBundleIdentifier:(id)a0 type:(id)a1;

@end
