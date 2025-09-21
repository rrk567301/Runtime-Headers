@interface UIUnderstanding.ClickabilityDetection : NSObject

@property (nonatomic, readonly) BOOL clickable;
@property (nonatomic, readonly) long long clickType;
@property (nonatomic, readonly) double confidence;

- (id)init;
- (id)initWithClickable:(BOOL)a0 clickType:(long long)a1 confidence:(double)a2;

@end
