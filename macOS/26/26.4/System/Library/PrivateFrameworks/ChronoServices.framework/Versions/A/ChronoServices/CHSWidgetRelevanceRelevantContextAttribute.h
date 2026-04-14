@class RKRelevantContext;

@interface CHSWidgetRelevanceRelevantContextAttribute : CHSWidgetRelevanceAttribute

@property (readonly, nonatomic) RKRelevantContext *context;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithRelevantContext:(id)a0;

@end
