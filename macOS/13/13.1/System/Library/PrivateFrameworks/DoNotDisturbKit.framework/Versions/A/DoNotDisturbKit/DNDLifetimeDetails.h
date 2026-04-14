@class NSString;

@interface DNDLifetimeDetails : NSObject <NSCopying>

@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *metadata;

+ (id)lifetimeDetailsForPlaceInference:(id)a0;
+ (id)lifetimeDetailsForEvent:(id)a0 relativeToDate:(id)a1;
+ (id)lifetimeDetailsForOneHour;
+ (id)lifetimeDetailsUntilEvening;
+ (id)lifetimeDetailsUntilMorning;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 name:(id)a1 metadata:(id)a2;

@end
