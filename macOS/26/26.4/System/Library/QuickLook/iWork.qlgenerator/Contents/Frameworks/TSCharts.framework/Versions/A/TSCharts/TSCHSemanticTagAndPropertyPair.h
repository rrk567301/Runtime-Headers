@class TSCHStyleSemanticTag;

@interface TSCHSemanticTagAndPropertyPair : NSObject <NSCopying>

@property (readonly, copy, nonatomic) TSCHStyleSemanticTag *semanticTag;
@property (readonly, nonatomic) int property;

+ (id)pairWithSemanticTag:(id)a0 property:(int)a1;
+ (id)semanticTagToSemanticUsagesMapForSemanticUsages:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithSemanticTag:(id)a0 property:(int)a1;

@end
