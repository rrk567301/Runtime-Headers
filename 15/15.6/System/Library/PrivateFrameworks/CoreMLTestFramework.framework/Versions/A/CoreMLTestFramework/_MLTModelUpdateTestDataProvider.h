@class _MLTJSONReader;

@interface _MLTModelUpdateTestDataProvider : NSObject <MLBatchProvider>

@property (retain, nonatomic) _MLTJSONReader *jsonReader;
@property char forTraining;
@property (readonly, nonatomic) long long count;

- (void).cxx_destruct;
- (id)featuresAtIndex:(long long)a0;
- (id)initWithRecipePath:(id)a0 forTraining:(char)a1 error:(id *)a2;

@end
