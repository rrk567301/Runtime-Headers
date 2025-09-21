@class MNNavigationServicePeer;

@interface MNNavigationServiceEmptyProxy : NSObject {
    MNNavigationServicePeer *_peer;
}

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (char)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (char)_isSelectorValidForForwarding:(SEL)a0;
- (id)initWithPeer:(id)a0;

@end
