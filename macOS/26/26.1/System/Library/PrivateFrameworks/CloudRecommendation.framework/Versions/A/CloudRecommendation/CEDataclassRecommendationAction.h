@class NSArray;

@interface CEDataclassRecommendationAction : CERecommendationAction

@property (retain, nonatomic) NSArray *dataclasses;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 title:(id)a1 dataclasses:(id)a2;

@end
