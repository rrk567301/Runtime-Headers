@protocol ResourceArbiterClientDelegate;

@interface BaseResourceArbiterClient : NSObject

@property (weak, nonatomic) id<ResourceArbiterClientDelegate> delegate;

- (void)releaseResourceAccess;
- (BOOL)asynchRequestResourceAccess:(BOOL)a0;
- (BOOL)synchRequestResourceAccess;
- (void).cxx_destruct;

@end
