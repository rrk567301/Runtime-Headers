@class VIVisualUnderstanding;

@interface VIParseResult : NSObject <NSCopying>

@property (readonly, nonatomic) VIVisualUnderstanding *visualUnderstanding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithVisualUnderstanding:(id)a0;

@end
