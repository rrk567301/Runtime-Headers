@class CALayer;

@interface _NSStatusItemPoofAnimator : NSPanel {
    CALayer *_rootLayer;
    CALayer *_snapshotLayer;
}

- (void)dealloc;
- (id)initForAnimatingWindow:(id)a0;
- (id)_generateSnapshotForWindow:(id)a0;
- (id)initWithStatusItem:(id)a0;
- (void)startAnimatingWithCompletionHandler:(id /* block */)a0;

@end
