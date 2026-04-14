@class NSString;

@interface VSJSError : NSObject <VSJSError>

@property (nonatomic) unsigned long long code;
@property (copy, nonatomic) NSString *message;

- (id)error;
- (id)description;
- (void).cxx_destruct;
- (id)init;

@end
