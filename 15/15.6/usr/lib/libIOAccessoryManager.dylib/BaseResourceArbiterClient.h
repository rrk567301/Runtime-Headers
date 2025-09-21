@protocol ResourceArbiterClientDelegate;

@interface BaseResourceArbiterClient : NSObject

@property (weak, nonatomic) id<ResourceArbiterClientDelegate> delegate;

- (void).cxx_destruct;
- (char)asynchRequestResourceAccess:(char)a0;
- (void)releaseResourceAccess;
- (char)synchRequestResourceAccess;

@end
