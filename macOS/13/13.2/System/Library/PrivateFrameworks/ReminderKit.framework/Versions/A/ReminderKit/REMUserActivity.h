@class NSData;

@interface REMUserActivity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSData *storage;

+ (void)userActivityWithUserActivity:(id)a0 completion:(id /* block */)a1;
+ (id)userActivityWithDictionaryData:(id)a0 error:(id *)a1;
+ (id)dataFromUserActivity:(id)a0;
+ (id)stringForActivityType:(long long)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)userActivity;
- (id)universalLink;
- (id)initWithUserActivity:(id)a0;
- (id)userActivityData;
- (id)initWithUniversalLink:(id)a0;
- (id)initWithUserActivityData:(id)a0;
- (id)initWithType:(long long)a0 storage:(id)a1;
- (id)initWithSiriIntent:(id)a0;
- (id)archivedDictionaryData;
- (id)siriIntent;
- (id)debugDescriptionDetails;

@end
