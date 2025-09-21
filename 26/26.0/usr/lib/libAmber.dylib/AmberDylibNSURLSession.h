@class NSURLSession;

@interface AmberDylibNSURLSession : NSObject

@property (readonly) NSURLSession *session;
@property (readonly) void *amberSession;

- (void).cxx_destruct;
- (id)initWithAmberSession:(void *)a0;

@end
