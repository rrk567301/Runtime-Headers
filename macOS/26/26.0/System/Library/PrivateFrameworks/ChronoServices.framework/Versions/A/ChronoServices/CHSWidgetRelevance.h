@class CHSIntentReference, CHSWidgetRelevanceAttribute, LNRelevantContext;

@interface CHSWidgetRelevance : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CHSWidgetRelevanceAttribute *attribute;
@property (readonly, nonatomic) CHSIntentReference *intentReference;
@property (readonly, nonatomic) LNRelevantContext *relevantContext;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAttribute:(id)a0 intentReference:(id)a1;

@end
