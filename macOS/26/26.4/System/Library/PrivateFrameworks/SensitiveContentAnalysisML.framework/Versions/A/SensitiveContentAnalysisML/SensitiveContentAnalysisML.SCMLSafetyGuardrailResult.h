@class NSArray;

@interface SensitiveContentAnalysisML.SCMLSafetyGuardrailResult : NSObject {
    void /* function */ labels;
}

@property (nonatomic, readonly) BOOL safe;
@property (nonatomic, readonly) NSArray *labels;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)init;

@end
