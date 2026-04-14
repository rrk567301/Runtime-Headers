@class NSNumber;

@interface TGTextGenerationOutputConstraint : NSObject <NSCopying, NSMutableCopying>

@property (copy) NSNumber *maxWordCount;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
