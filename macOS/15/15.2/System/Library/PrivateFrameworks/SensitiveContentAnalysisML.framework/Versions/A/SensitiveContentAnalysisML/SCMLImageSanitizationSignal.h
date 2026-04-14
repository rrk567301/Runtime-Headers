@class NSNumber;

@interface SCMLImageSanitizationSignal : NSObject

@property (nonatomic) BOOL safe;
@property (copy, nonatomic) NSNumber *score;

- (id)init;
- (void).cxx_destruct;

@end
