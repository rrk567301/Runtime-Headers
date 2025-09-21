@interface UIUnderstanding.FocusDetection : NSObject

@property (nonatomic, readonly) BOOL focused;
@property (nonatomic, readonly) double confidence;

- (id)init;
- (id)initWithFocused:(BOOL)a0 confidence:(double)a1;

@end
