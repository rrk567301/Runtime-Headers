@protocol CNRetryDelegate;

@interface CNRetry : NSObject

@property (readonly, weak) id<CNRetryDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)performAndWait:(id /* block */)a0;

@end
