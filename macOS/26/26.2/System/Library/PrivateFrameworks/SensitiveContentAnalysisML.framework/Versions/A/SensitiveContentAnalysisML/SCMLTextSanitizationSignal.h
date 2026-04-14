@class NSString, NSNumber;

@interface SCMLTextSanitizationSignal : NSObject

@property (nonatomic) BOOL safe;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSNumber *score;
@property (nonatomic) BOOL regionalSensitive;
@property (nonatomic) unsigned int severity;

- (void).cxx_destruct;
- (id)init;

@end
