@class NSString, NSURL, NSMapTable;

@interface VNSceneTaxonomyOperationPoints : VNOperationPoints {
    NSString *_frameworkOperationPointsIdentifier;
    NSURL *_nonframeworkDataURL;
    NSMapTable *_labelToOperationPointsDataIndexMap;
    struct { float x0; float x1; struct { float x0; float x1; } x2[9]; struct { float x0; float x1; } x3[9]; } *_operationPointsDataArray;
    unsigned long long _cachedHashValue;
}

+ (char)supportsSecureCoding;
+ (id)loadFromURL:(id)a0 error:(id *)a1;
+ (id)URLForIdentifier:(id)a0 error:(id *)a1;
+ (id)loadFromIdentifier:(id)a0 error:(id *)a1;
+ (id)loadFromPropertyList:(id)a0 error:(id *)a1;

- (void)dealloc;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_allClassificationIdentifiers;
- (const struct { float x0; float x1; struct { float x0; float x1; } x2[9]; struct { float x0; float x1; } x3[9]; } *)_operationPointsDataForClassificationIdentifier:(id)a0 error:(id *)a1;
- (id)_propertyListRepresentation;
- (char)getClassificationMetrics:(id *)a0 forClassificationIdentifier:(id)a1 error:(id *)a2;
- (char)getConfidence:(float *)a0 forClassificationIdentifier:(id)a1 withPrecision:(float)a2 error:(id *)a3;
- (char)getConfidence:(float *)a0 forClassificationIdentifier:(id)a1 withRecall:(float)a2 error:(id *)a3;
- (char)getDefaultConfidence:(float *)a0 forClassificationIdentifier:(id)a1 error:(id *)a2;
- (char)getPrecision:(float *)a0 forClassificationIdentifier:(id)a1 confidence:(float)a2 error:(id *)a3;
- (char)getRecall:(float *)a0 forClassificationIdentifier:(id)a1 confidence:(float)a2 error:(id *)a3;
- (id)initWithLabelToOperationPointsDataIndexMap:(id)a0 operationPointsDataArray:(struct { float x0; float x1; struct { float x0; float x1; } x2[9]; struct { float x0; float x1; } x3[9]; } *)a1;

@end
