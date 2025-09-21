@interface KHDBKCanceler : NSObject

@property (nonatomic) char canceled;

- (void)cancelProgressPanel:(id)a0;
- (void)skipProgressPanel:(id)a0;

@end
