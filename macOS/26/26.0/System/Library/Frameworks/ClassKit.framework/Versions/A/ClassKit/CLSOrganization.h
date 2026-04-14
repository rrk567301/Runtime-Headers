@class NSString, NSArray, NSPersonNameComponents;

@interface CLSOrganization : CLSObject <CLSContactsSearchable>

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSArray *locationIDs;
@property (copy, nonatomic) NSArray *emailDomains;
@property (copy, nonatomic) NSString *searchText;
@property (readonly) NSString *displayName;
@property (readonly) NSPersonNameComponents *nameComponents;
@property (readonly) NSString *emailAddress;
@property (readonly) NSString *groupIdentifier;

+ (BOOL)supportsSecureCoding;
+ (long long)typeFromString:(id)a0;
+ (id)_propertyNames;
+ (id)stringForType:(long long)a0;

- (id)_init;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithOrganizationID:(id)a0 type:(long long)a1 name:(id)a2;
- (void)mergeWithObject:(id)a0;

@end
