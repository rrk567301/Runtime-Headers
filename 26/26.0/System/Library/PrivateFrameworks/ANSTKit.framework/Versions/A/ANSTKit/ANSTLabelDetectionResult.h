@class NSArray;

@interface ANSTLabelDetectionResult : ANSTResult

@property (readonly, copy, nonatomic) NSArray *labels;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLabels:(id)a0;

@end
