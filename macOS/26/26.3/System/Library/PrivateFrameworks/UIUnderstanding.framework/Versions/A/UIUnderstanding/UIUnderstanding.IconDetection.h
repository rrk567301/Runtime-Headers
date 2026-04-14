@class NSString;

@interface UIUnderstanding.IconDetection : NSObject

@property (nonatomic, readonly) long long label;
@property (nonatomic, readonly) NSString *labelString;
@property (nonatomic, readonly) double confidence;

- (id)init;
- (id)initWithLabel:(long long)a0 confidence:(double)a1;

@end
