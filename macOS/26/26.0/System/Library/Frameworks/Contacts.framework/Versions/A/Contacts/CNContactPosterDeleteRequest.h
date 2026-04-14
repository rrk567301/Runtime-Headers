@class NSString, NSArray;

@interface CNContactPosterDeleteRequest : CNContactPosterDataDeleteRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *attributeName;
@property (readonly, copy, nonatomic) NSArray *attributesToDeleteBy;

+ (id)os_log;
+ (id)requestToDeletePosterForIdentifier:(id)a0;
+ (id)requestToDeletePosterForIdentifiers:(id)a0;
+ (id)requestToDeletePostersForContactIdentifiers:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)persistentStoreRequest;
- (id)initWithAttributeName:(id)a0 attributesToDeleteBy:(id)a1;

@end
