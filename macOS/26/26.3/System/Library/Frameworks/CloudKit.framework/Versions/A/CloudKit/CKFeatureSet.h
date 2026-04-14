@class NSArray, NSMutableDictionary;

@interface CKFeatureSet : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableDictionary *featureMap;
@property (readonly, nonatomic) NSArray *features;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFeatures:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void)addFeatures:(id)a0;
- (BOOL)hasValue:(id)a0 forName:(id)a1;
- (id)valuesForName:(id)a0;

@end
