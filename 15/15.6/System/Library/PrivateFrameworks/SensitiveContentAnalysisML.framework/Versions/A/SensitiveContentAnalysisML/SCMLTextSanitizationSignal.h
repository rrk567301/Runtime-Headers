@class NSString, NSNumber;

@interface SCMLTextSanitizationSignal : NSObject

@property (nonatomic) char safe;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSNumber *score;
@property (nonatomic) char regionalSensitive;
@property (nonatomic) unsigned int severity;

- (id)init;
- (void).cxx_destruct;

@end
