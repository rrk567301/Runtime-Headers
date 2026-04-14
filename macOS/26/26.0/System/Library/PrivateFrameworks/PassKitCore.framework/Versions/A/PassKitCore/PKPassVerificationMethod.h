@class NSString;

@interface PKPassVerificationMethod : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL requiresUserInteraction;
@property (readonly, nonatomic) BOOL needsServerRequest;
@property (readonly, nonatomic) BOOL supportedOnCurrentDevice;
@property (readonly, nonatomic) BOOL isSMSOTP;
@property (readonly, nonatomic) NSString *organizationName;

+ (id)methodFromLegacyChannel:(id)a0;
+ (id)verificationMethodFromDictionary:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)typeDescription;
- (void)_appendDescription:(id)a0;
- (id)_initWithChannel:(id)a0;
- (id)_initWithType:(unsigned long long)a0 channel:(id)a1;
- (id)_initWithType:(unsigned long long)a0 dictionary:(id)a1;
- (id)_initWithType:(unsigned long long)a0 identifier:(id)a1 requiresUserInteraction:(BOOL)a2;
- (id)_legacyChannelRepresentation;
- (id)debugTypeDescription;
- (id)legacyChannelRepresentation;
- (id)supplementalTypeDescription;

@end
