@class NSDictionary, NSPredicateOperator;

@interface AVAssetVariantChannelCountPredicate : NSPredicate {
    long long _channelcount;
    NSDictionary *_mediaSelectionOptionPlist;
    NSPredicateOperator *_operator;
}

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (id)predicateFormat;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (id)initWithChannelCount:(long long)a0 mediaSelectionOption:(id)a1 operatorType:(unsigned long long)a2;

@end
