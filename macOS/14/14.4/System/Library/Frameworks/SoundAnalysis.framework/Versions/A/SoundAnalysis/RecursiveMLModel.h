@interface RecursiveMLModel : NSObject <SNMLModel> {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ recursiveInputs;
    void /* unknown type, empty encoding */ outputToInputMap;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ modelDescription;

- (id)init;
- (void).cxx_destruct;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;

@end
