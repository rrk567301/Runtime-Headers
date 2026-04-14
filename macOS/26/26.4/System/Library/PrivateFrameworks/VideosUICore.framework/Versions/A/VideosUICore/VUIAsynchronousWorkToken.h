@class NSOperation;

@interface VUIAsynchronousWorkToken : NSObject

@property (retain, nonatomic) NSOperation *operation;

- (id)initWithOperation:(id)a0;
- (void)cancel;
- (void).cxx_destruct;
- (id)init;

@end
