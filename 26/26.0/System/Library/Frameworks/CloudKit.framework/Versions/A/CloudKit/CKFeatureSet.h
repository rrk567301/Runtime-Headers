@class NSArray, NSMutableDictionary;

@interface CKFeatureSet : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableDictionary *featureMap;
@property (readonly, nonatomic) NSArray *features;

- (id)initWithFeatures:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addFeatures:(id)a0;
- (BOOL)hasValue:(id)a0 forName:(id)a1;
- (id)valuesForName:(id)a0;

@end
