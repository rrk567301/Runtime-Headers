@class NUSpace, NSMutableArray;

@interface _NUTaggedSpace : NSObject <NSCopying> {
    NSMutableArray *_tagNodes;
}

@property (readonly) NUSpace *space;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithSpace:(id)a0;
- (BOOL)hasTransform;
- (id)tagNodes;
- (void)addTagNode:(id)a0;
- (void)addTagNodes:(id)a0;
- (void)mergeSpace:(id)a0;
- (BOOL)isEqualToTaggedImageSpace:(id)a0;

@end
