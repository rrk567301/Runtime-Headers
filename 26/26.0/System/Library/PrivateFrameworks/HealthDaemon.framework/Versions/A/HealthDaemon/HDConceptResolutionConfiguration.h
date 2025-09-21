@class NSString;

@interface HDConceptResolutionConfiguration : NSObject

@property (readonly, copy, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) long long recordCategoryType;
@property (readonly, nonatomic) unsigned long long options;

- (id)initWithCountryCode:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCountryCode:(id)a0 recordCategoryType:(long long)a1 options:(unsigned long long)a2;

@end
