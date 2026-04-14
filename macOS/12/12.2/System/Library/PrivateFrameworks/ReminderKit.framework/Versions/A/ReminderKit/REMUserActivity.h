@class NSData;

@interface REMUserActivity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSData *storage;

+ (id)dataFromUserActivity:(id)a0;
+ (id)stringForActivityType:(long long)a0;
+ (void)userActivityWithUserActivity:(id)a0 completion:(id /* block */)a1;
+ (id)userActivityWithDictionaryData:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)userActivity;
- (id)universalLink;
- (id)initWithUserActivity:(id)a0;
- (id)userActivityData;
- (id)initWithUserActivityData:(id)a0;
- (id)initWithUniversalLink:(id)a0;
- (id)initWithType:(long long)a0 storage:(id)a1;
- (id)debugDescriptionDetails;
- (id)siriIntent;
- (id)initWithSiriIntent:(id)a0;
- (id)archivedDictionaryData;

@end
