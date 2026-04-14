@class MNNavigationServicePeer;

@interface MNNavigationServiceEmptyProxy : NSObject {
    MNNavigationServicePeer *_peer;
}

- (BOOL)respondsToSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (id)initWithPeer:(id)a0;
- (BOOL)_isSelectorValidForForwarding:(SEL)a0;

@end
