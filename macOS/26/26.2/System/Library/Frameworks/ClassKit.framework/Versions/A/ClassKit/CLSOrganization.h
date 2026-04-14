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
+ (id)stringForType:(long long)a0;
+ (long long)typeFromString:(id)a0;
+ (id)_propertyNames;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_init;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithOrganizationID:(id)a0 type:(long long)a1 name:(id)a2;
- (void)mergeWithObject:(id)a0;

@end
