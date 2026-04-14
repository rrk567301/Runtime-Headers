@class NSString, NSArray, PKPassVerificationMethod;

@interface PKPassVerificationMethodGroup : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSArray *methods;
@property (readonly, nonatomic) BOOL requiresUserInteraction;
@property (readonly, nonatomic) BOOL needsServerRequest;
@property (readonly, nonatomic) BOOL supportedOnCurrentDevice;
@property (readonly, nonatomic) BOOL isSMSOTP;
@property (readonly, nonatomic) BOOL isCardReadOnly;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) PKPassVerificationMethod *onlyMethod;

+ (id)methodGroupFromLegacyChannel:(id)a0;

- (id)initWithDictionary:(id)a0;
- (id)localizedTitle;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_localizedShortDescriptionForMethod:(id)a0 pass:(id)a1;
- (id)initWithIdentifier:(id)a0 methods:(id)a1;
- (id)legacyChannelRepresentation;
- (id)localizedShortDescriptionWithPass:(id)a0;

@end
