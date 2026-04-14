@class RKRelevantContext;

@interface CHSWidgetRelevanceRelevantContextAttribute : CHSWidgetRelevanceAttribute

@property (readonly, nonatomic) RKRelevantContext *context;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithRelevantContext:(id)a0;

@end
