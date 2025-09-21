@class NSString, NSArray, NSPersonNameComponents;

@interface CLSClass : CLSObject <CLSRelationable, CLSContactsSearchable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *className;
@property (copy, nonatomic) NSString *customClassName;
@property BOOL isEditable;
@property (copy, nonatomic) NSString *tempObjectID;
@property (nonatomic) long long source;
@property (nonatomic) long long originatingSource;
@property (copy, nonatomic) NSString *searchText;
@property (readonly) NSString *displayName;
@property (readonly) NSString *groupIdentifier;
@property (copy, nonatomic) NSString *iconID;
@property (readonly, nonatomic) NSArray *classMembers;
@property (copy, nonatomic) NSString *locationID;
@property (readonly) NSPersonNameComponents *nameComponents;
@property (readonly) NSString *emailAddress;

+ (BOOL)supportsSecureCoding;
+ (id)relations;

- (id)_init;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void)setDisplayName:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)validateObject:(id *)a0;
- (void)addPerson:(id)a0 withRole:(unsigned long long)a1;
- (id)initWithLocation:(id)a0 customName:(id)a1;
- (void)mergeWithObject:(id)a0;
- (void)removePerson:(id)a0 withRole:(unsigned long long)a1;

@end
