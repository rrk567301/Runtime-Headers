@interface MLNNLayerComputeUnitSelectionUtils : NSObject

+ (id)getLayerHints:(id)a0 error:(id *)a1;
+ (id)getLayerTypes:(id)a0 error:(id *)a1;
+ (id)getNetJson:(id)a0 error:(id *)a1;
+ (char)undoLastHintUpdate:(id)a0 error:(id *)a1;
+ (char)updateHints:(id)a0 hints:(id)a1 error:(id *)a2;

@end
