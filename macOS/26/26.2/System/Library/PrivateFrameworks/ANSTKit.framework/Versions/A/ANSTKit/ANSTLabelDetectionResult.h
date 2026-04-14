@class NSArray;

@interface ANSTLabelDetectionResult : ANSTResult

@property (readonly, copy, nonatomic) NSArray *labels;

+ (id)new;

- (void).cxx_destruct;
- (id)init;
- (id)initWithLabels:(id)a0;

@end
