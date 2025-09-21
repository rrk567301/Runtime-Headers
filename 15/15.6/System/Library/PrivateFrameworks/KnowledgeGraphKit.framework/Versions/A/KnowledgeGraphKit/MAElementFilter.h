@class NSArray, NSSet, NSDictionary, KGElementIdentifierSet, NSString;

@interface MAElementFilter : NSObject

@property (readonly, nonatomic) NSArray *kgRequiredLabels;
@property (readonly, nonatomic) NSArray *kgOptionalLabels;
@property (readonly, copy, nonatomic) NSSet *labels;
@property (readonly, copy, nonatomic) KGElementIdentifierSet *domains;
@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly, nonatomic) NSString *visualString;

+ (id)any;
+ (char)scanPropertyOption:(out id *)a0 withScanner:(id)a1;
+ (char)scanDomains:(out id *)a0 withScanner:(id)a1;
+ (char)scanElementFilterLabels:(out id *)a0 domains:(out id *)a1 properties:(out id *)a2 withScanner:(id)a3;
+ (id)scanFilterWithScanner:(id)a0;
+ (char)scanInstance:(out id *)a0 withScanner:(id)a1;
+ (char)scanLabels:(out id *)a0 withScanner:(id)a1;
+ (char)scanProperties:(out id *)a0 withScanner:(id)a1;
+ (char)scanPropertyValue:(out id *)a0 withScanner:(id)a1;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)filterBySettingProperties:(id)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)initWithLabels:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (void)_appendPropertyOption:(id)a0 toString:(id)a1;
- (char)matchesElement:(id)a0;
- (void)appendVisualStringToString:(id)a0;
- (id)initWithLabel:(id)a0 domains:(id)a1 properties:(id)a2;
- (id)initWithLabels:(id)a0 domains:(id)a1 properties:(id)a2;
- (char)matchesDomainOfElement:(id)a0;
- (char)matchesLabelOfElement:(id)a0;
- (char)matchesPropertiesOfElement:(id)a0;

@end
