@class NSString;

@interface CNFavoritesEntryRepresentation : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) BOOL shouldLogAnonymousEntry;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *entryIdentifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *value;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *propertyKey;
@property (readonly, nonatomic) NSString *actionType;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *actionChannel;
@property (readonly, nonatomic) NSString *contactIdentifier;
@property (readonly, nonatomic) NSString *labeledValueIdentifier;

- (id)initWithDictionaryRepresentation:(id)a0;
- (id)debugDescription;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (unsigned long long)equivalencyHash;
- (void)copyContactMatchingInfoFrom:(id)a0;
- (id)dictionaryRepresentationWithRedaction:(BOOL)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 value:(id)a2 label:(id)a3 propertyKey:(id)a4 actionType:(id)a5 bundleIdentifier:(id)a6 actionChannel:(id)a7 contactIdentifier:(id)a8 labeledValueIdentifier:(id)a9;
- (id)initWithRemoteRepresentation:(id)a0;
- (id)mapBundleIdentifier:(id)a0;
- (void)rematchWithContactStore:(id)a0;
- (id)remoteRepresentation;

@end
