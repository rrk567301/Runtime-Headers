@class NSString;

@interface CNCountryInformation : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *isoCountryCode;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *phoneticName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithISOCountryCode:(id)a0 name:(id)a1 phoneticName:(id)a2;

@end
