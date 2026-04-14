@class NSString;

@interface VSJSError : NSObject <VSJSError>

@property (nonatomic) unsigned long long code;
@property (copy, nonatomic) NSString *message;

- (id)init;
- (id)description;
- (id)error;
- (void).cxx_destruct;

@end
