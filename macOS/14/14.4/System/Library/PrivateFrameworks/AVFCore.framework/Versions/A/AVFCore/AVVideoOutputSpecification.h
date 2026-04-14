@class NSArray, NSDictionary;

@interface AVVideoOutputSpecification : NSObject <NSCopying> {
    NSArray *_tagCollections;
    struct __CFDictionary { } *_tagCollectionPixelBufferAttributesMapping;
    NSDictionary *_defaultPixelBufferAttributes;
}

@property (readonly, copy, nonatomic) NSArray *preferredTagCollections;
@property (copy, nonatomic) NSDictionary *defaultPixelBufferAttributes;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithTagCollections:(id)a0;
- (id)pixelBufferAttributesForTagCollection:(struct OpaqueCMTagCollection { } *)a0;
- (void)setOutputPixelBufferAttributes:(id)a0 forTagCollection:(struct OpaqueCMTagCollection { } *)a1;

@end
