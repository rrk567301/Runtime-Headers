@class RKRelevantContext;

@interface CHSWidgetRelevanceRelevantContextAttribute : CHSWidgetRelevanceAttribute

@property (readonly, nonatomic) RKRelevantContext *context;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithRelevantContext:(id)a0;

@end
