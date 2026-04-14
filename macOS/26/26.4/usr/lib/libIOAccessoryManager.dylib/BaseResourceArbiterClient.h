@protocol ResourceArbiterClientDelegate;

@interface BaseResourceArbiterClient : NSObject

@property (weak, nonatomic) id<ResourceArbiterClientDelegate> delegate;

- (void)releaseResourceAccess;
- (void).cxx_destruct;
- (BOOL)synchRequestResourceAccess;
- (BOOL)asynchRequestResourceAccess:(BOOL)a0;

@end
