@protocol CNRetryDelegate;

@interface CNRetry : NSObject

@property (readonly, weak) id<CNRetryDelegate> delegate;

- (id)init;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)performAndWait:(id /* block */)a0;

@end
