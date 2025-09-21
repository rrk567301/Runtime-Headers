@interface CNContactUnificationOptions : NSObject <NSCopying>

@property (class, readonly, nonatomic) CNContactUnificationOptions *sharedInstance;

@property (nonatomic) char shouldIncludeMainStoreContacts;
@property (nonatomic) char shouldFreezeMutableContacts;
@property (nonatomic) long long labeledValueUnificationThreshold;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithContactFetchRequest:(id)a0;

@end
