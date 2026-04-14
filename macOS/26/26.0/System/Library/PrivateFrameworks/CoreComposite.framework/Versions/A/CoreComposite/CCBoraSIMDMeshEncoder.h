@interface CCBoraSIMDMeshEncoder : NSObject {
    void /* unknown type, empty encoding */ _gridSize;
    struct array<__attribute__((neon_vector_type(16))) unsigned char, 256UL> { void /* unknown type, empty encoding */ __elems_[256]; } _coordIndices;
}

+ (id)new;

- (id)initWithSize:(SEL)a0;

@end
