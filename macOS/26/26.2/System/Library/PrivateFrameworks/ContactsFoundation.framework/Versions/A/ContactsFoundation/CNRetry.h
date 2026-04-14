@protocol CNRetryDelegate;

@interface CNRetry : NSObject

@property (readonly, weak) id<CNRetryDelegate> delegate;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDelegate:(id)a0;
- (id)performAndWait:(id /* block */)a0;

@end
