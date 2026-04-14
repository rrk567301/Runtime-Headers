@interface SNMLCustomModel : NSObject <SNMLModel> {
    void /* unknown type, empty encoding */ customModel;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ modelDescription;

- (id)init;
- (void).cxx_destruct;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithMLCustomModel:(id)a0 modelDescription:(id)a1;

@end
