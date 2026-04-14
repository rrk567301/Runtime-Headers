@class NSNumber;

@interface TGTextGenerationOutputConstraint : NSObject <NSCopying, NSMutableCopying>

@property (copy) NSNumber *maxWordCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;

@end
