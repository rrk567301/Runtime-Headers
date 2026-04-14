@class TSCHStyleSemanticTag;

@interface TSCHSemanticTagAndPropertyPair : NSObject <NSCopying>

@property (readonly, copy, nonatomic) TSCHStyleSemanticTag *semanticTag;
@property (readonly, nonatomic) int property;

+ (id)semanticTagToSemanticUsagesMapForSemanticUsages:(id)a0;
+ (id)pairWithSemanticTag:(id)a0 property:(int)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithSemanticTag:(id)a0 property:(int)a1;

@end
