@interface CNContactUnificationOptions : NSObject <NSCopying>

@property (class, readonly, nonatomic) CNContactUnificationOptions *sharedInstance;

@property (nonatomic) BOOL shouldIncludeMainStoreContacts;
@property (nonatomic) BOOL shouldFreezeMutableContacts;
@property (nonatomic) long long labeledValueUnificationThreshold;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithContactFetchRequest:(id)a0;

@end
