@class NUSpace, NSMutableArray;

@interface _NUTaggedSpace : NSObject <NSCopying> {
    NSMutableArray *_tagNodes;
}

@property (readonly) NUSpace *space;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addTagNode:(id)a0;
- (void)addTagNodes:(id)a0;
- (BOOL)hasTransform;
- (id)initWithSpace:(id)a0;
- (BOOL)isEqualToTaggedImageSpace:(id)a0;
- (void)mergeSpace:(id)a0;
- (id)tagNodes;

@end
