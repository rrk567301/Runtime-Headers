@class AXFDispatchQueue;
@protocol _AXFEventProviderDelegate;

@interface _AXFEventProvider : NSObject

@property (readonly, weak) id<_AXFEventProviderDelegate> delegate;
@property (readonly) AXFDispatchQueue *delegateQueue;

+ (id)newSystemEventProviderWithDelegate:(id)a0 delegateQueue:(id)a1;

- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1;
- (void)start;
- (void)stop;
- (void).cxx_destruct;

@end
