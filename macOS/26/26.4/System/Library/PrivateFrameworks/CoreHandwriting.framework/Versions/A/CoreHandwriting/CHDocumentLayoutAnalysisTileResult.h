@interface CHDocumentLayoutAnalysisTileResult : NSObject <NSCopying, NSSecureCoding> {
    struct vector<std::vector<float>, std::allocator<std::vector<float>>> { void *__begin_; void *__end_; struct { void *__cap_; } ; } _strokeClassificationMatrix;
    struct vector<std::unordered_map<unsigned long, float>, std::allocator<std::unordered_map<unsigned long, float>>> { void *__begin_; void *__end_; struct { void *__cap_; } ; } _sparseAdjacencyMatrix;
    unsigned long long _hash;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)descriptionForSparseAdjacencyMatrix:(const void *)a0;
+ (id)descriptionForStrokeClassificationMatrix:(const void *)a0;
+ (void)deserializeStrokeClassificationMatrix:(void *)a0 sparseAdjacencyMatrix:(void *)a1 withCoder:(id)a2;
+ (void)serializeStrokeClassificationMatrix:(const void *)a0 sparseAdjacencyMatrix:(const void *)a1 withCoder:(id)a2;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id).cxx_construct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithStrokeClassificationMatrix:(void *)a0 sparseAdjacencyMatrix:(void *)a1;
- (void *)sparseAdjacencyMatrix;
- (void *)strokeClassificationMatrix;

@end
