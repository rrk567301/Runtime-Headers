@class NUSpace, NSMutableArray;

@interface _NUTaggedSpace : NSObject <NSCopying> {
    NSMutableArray *_tagNodes;
}

@property (readonly) NUSpace *space;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)addTagNode:(id)a0;
- (void)addTagNodes:(id)a0;
- (BOOL)hasTransform;
- (id)initWithSpace:(id)a0;
- (BOOL)isEqualToTaggedImageSpace:(id)a0;
- (void)mergeSpace:(id)a0;
- (id)tagNodes;

@end
