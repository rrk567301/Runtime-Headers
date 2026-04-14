@class NSDictionary;

@interface CHDocumentLayoutAnalysisResult : NSObject <NSCopying, NSSecureCoding> {
    struct vector<std::vector<float>, std::allocator<std::vector<float>>> { void *__begin_; void *__end_; void *__cap_; } _strokeClassificationMatrix;
    struct vector<std::unordered_map<unsigned long, float>, std::allocator<std::unordered_map<unsigned long, float>>> { void *__begin_; void *__end_; void *__cap_; } _sparseAdjacencyMatrix;
    unsigned long long _hash;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *layoutAnalysisResultsPerTile;
@property (readonly, nonatomic) NSDictionary *strokeBoundsPerStrokeIdentifier;

+ (void)mergeTileStrokeClassificationMatrix:(const void *)a0 tileSparseAdjacencyMatrix:(const void *)a1 intoMergedStrokeClassificationMatrix:(void *)a2 mergedAdjacencyMatrix:(void *)a3 strokeIndexMapping:(const void *)a4 tileOverlapStrokeIndexes:(const void *)a5;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)probabilityByScriptClassificationsForStrokeIndex:(unsigned long long)a0 scriptCodeMap:(id)a1;
- (id)initWithLastDocumentLayoutAnalysisResult:(id)a0 affectedLayoutAnalysisResultsPerTile:(id)a1 allLayoutAnalysisResultsPerTile:(id)a2 updatedStrokeIdentifiers:(id)a3 orderedStrokeIdentifiers:(id)a4 strokeBoundsPerStrokeIdentifier:(id)a5;
- (id)initWithLayoutAnalysisResultsPerTile:(id)a0 orderedStrokeIdentifiers:(id)a1 strokeBoundsPerStrokeIdentifier:(id)a2;
- (id)rawScriptClassificationResultForStrokeIndex:(unsigned long long)a0 scriptCodeMap:(id)a1;
- (void *)sparseAdjacencyMatrix;
- (void *)strokeClassificationMatrix;

@end
