@class NSString;

@interface VSJSError : NSObject <VSJSError>

@property (nonatomic) unsigned long long code;
@property (copy, nonatomic) NSString *message;

- (id)description;
- (id)init;
- (id)error;
- (void).cxx_destruct;

@end
