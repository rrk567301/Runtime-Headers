@class NSData;

@interface REMUserActivity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ivarLock;
@property (retain, nonatomic) id l_decodedStorage;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSData *storage;
@property (readonly, nonatomic) long long flags;

+ (id)stringForFlags:(long long)a0;
+ (id)dataFromUserActivity:(id)a0;
+ (id)stringForActivityType:(long long)a0;
+ (id)userActivityWithDictionaryData:(id)a0 error:(id *)a1;
+ (void)userActivityWithUserActivity:(id)a0 completion:(id /* block */)a1;

- (id)initWithUserActivity:(id)a0;
- (id)debugDescription;
- (id)userActivity;
- (id)userActivityData;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithUniversalLink:(id)a0;
- (id)initWithUserActivityData:(id)a0;
- (id)universalLink;
- (id)decodeStorageIfNeededWithBlock:(id /* block */)a0;
- (id)archivedDictionaryData;
- (id)debugDescriptionDetails;
- (id)initWithSiriIntent:(id)a0;
- (id)initWithType:(long long)a0 storage:(id)a1 flags:(long long)a2;
- (id)siriIntent;
- (id)userActivityWithFlags:(long long)a0;

@end
