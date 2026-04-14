@class NSError, NSURL, NSString;

@interface CalFTPOperation : NSObject

@property (nonatomic) BOOL isCancelled;
@property (nonatomic) BOOL isFinished;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *user;
@property (retain, nonatomic) NSString *password;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ completionBlock;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (void)finishWithError:(id)a0;
- (id)initWithURL:(id)a0 user:(id)a1 password:(id)a2;

@end
