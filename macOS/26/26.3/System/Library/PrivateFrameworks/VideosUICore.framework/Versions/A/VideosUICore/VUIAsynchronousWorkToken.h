@class NSOperation;

@interface VUIAsynchronousWorkToken : NSObject

@property (retain, nonatomic) NSOperation *operation;

- (void)cancel;
- (id)initWithOperation:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
