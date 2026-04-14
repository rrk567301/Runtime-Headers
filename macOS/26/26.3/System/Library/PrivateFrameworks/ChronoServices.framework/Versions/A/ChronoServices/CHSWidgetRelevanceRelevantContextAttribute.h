@class RKRelevantContext;

@interface CHSWidgetRelevanceRelevantContextAttribute : CHSWidgetRelevanceAttribute

@property (readonly, nonatomic) RKRelevantContext *context;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRelevantContext:(id)a0;

@end
