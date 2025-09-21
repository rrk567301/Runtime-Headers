@class NSArray;

@interface SensitiveContentAnalysisML.SCMLSafetyGuardrailResult : NSObject {
    void /* function */ labels;
}

@property (nonatomic, readonly) BOOL safe;
@property (nonatomic, readonly) NSArray *labels;

- (id)initWithResult:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
