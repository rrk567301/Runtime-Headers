@class NSNumber, NSString;

@interface SCMLImageSanitizationSignal : NSObject

@property (nonatomic) BOOL safe;
@property (copy, nonatomic) NSNumber *score;
@property (nonatomic) BOOL regionalSensitive;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) unsigned int severity;

- (id)init;
- (void).cxx_destruct;

@end
