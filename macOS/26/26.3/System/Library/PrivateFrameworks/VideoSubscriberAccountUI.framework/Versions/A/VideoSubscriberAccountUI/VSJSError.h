@class NSString;

@interface VSJSError : NSObject <VSJSError>

@property (nonatomic) unsigned long long code;
@property (copy, nonatomic) NSString *message;

- (id)error;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
