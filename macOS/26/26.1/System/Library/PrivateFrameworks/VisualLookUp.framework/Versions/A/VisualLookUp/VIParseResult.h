@class VIVisualUnderstanding;

@interface VIParseResult : NSObject <NSCopying>

@property (readonly, nonatomic) VIVisualUnderstanding *visualUnderstanding;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithVisualUnderstanding:(id)a0;

@end
