@class AMSURLSession;

@interface WLKURLSessionManager : NSObject

@property (retain, nonatomic) AMSURLSession *urlSession;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end
