@class NSNumber;

@interface SCMLImageSanitizationSignal : NSObject

@property (nonatomic) BOOL safe;
@property (copy, nonatomic) NSNumber *score;
@property (nonatomic) BOOL regionalSensitive;
@property (nonatomic) unsigned int severity;

- (id)init;
- (void).cxx_destruct;

@end
