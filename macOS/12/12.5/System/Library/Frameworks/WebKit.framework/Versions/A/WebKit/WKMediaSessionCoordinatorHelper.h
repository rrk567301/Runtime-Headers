@class NSString;

@interface WKMediaSessionCoordinatorHelper : NSObject <_WKMediaSessionCoordinatorDelegate> {
    struct WeakPtr<WebCore::MediaSessionCoordinatorClient, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> { void *m_ptr; } m_impl; } m_coordinatorClient;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithCoordinator:(void *)a0;
- (void)seekSessionToTime:(double)a0 withCompletion:(id /* block */)a1;
- (void)playSessionWithCompletion:(id /* block */)a0;
- (void)pauseSessionWithCompletion:(id /* block */)a0;
- (void)setSessionTrack:(id)a0 withCompletion:(id /* block */)a1;
- (void)coordinatorStateChanged:(long long)a0;

@end
