@protocol ResourceArbiterClientDelegate;

@interface BaseResourceArbiterClient : NSObject

@property (weak, nonatomic) id<ResourceArbiterClientDelegate> delegate;

- (BOOL)asynchRequestResourceAccess:(BOOL)a0;
- (void)releaseResourceAccess;
- (void).cxx_destruct;
- (BOOL)synchRequestResourceAccess;

@end
