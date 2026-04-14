@class NSOperation;

@interface VUIAsynchronousWorkToken : NSObject

@property (retain, nonatomic) NSOperation *operation;

- (void)cancel;
- (id)initWithOperation:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
