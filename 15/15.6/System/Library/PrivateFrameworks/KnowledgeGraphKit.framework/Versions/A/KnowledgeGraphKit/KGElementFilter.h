@class NSArray, NSDictionary;

@interface KGElementFilter : NSObject

@property (readonly, nonatomic) NSArray *requiredLabels;
@property (readonly, nonatomic) NSArray *optionalLabels;
@property (readonly, nonatomic) NSDictionary *properties;
@property (nonatomic) char includeTombstones;
@property (readonly, nonatomic) char noLabelsOrProperties;

+ (id)any;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithRequiredLabels:(id)a0 optionalLabels:(id)a1 properties:(id)a2;
- (char)matchesElement:(id)a0;
- (char)matchesLabels:(id)a0;
- (char)matchesProperties:(id)a0;

@end
