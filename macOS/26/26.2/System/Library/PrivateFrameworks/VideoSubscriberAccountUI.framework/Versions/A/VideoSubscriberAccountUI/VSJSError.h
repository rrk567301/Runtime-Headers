@class NSString;

@interface VSJSError : NSObject <VSJSError>

@property (nonatomic) unsigned long long code;
@property (copy, nonatomic) NSString *message;

- (id)error;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
