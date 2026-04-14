@class NSString, NSPersonNameComponents;

@interface CLSGroup : CLSObject <CLSRelationable, CLSContactsSearchable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSString *emailAddress;
@property (copy, nonatomic) NSString *searchText;
@property (copy, nonatomic) NSString *groupName;
@property (readonly) NSString *groupIdentifier;
@property (copy, nonatomic) NSString *locationID;
@property (readonly) NSString *displayName;
@property (readonly) NSPersonNameComponents *nameComponents;

+ (BOOL)supportsSecureCoding;
+ (id)relations;

- (id)dictionaryRepresentation;
- (id)_init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)validateObject:(id *)a0;
- (void)mergeWithObject:(id)a0;

@end
