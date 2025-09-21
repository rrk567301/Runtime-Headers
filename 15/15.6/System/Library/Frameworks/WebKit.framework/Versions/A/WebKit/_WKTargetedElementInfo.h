@class NSSet, NSArray, NSString;

@interface _WKTargetedElementInfo : NSObject <WKObject> {
    struct ObjectStorage<API::TargetedElementInfo> { struct type { unsigned char __lx[208]; } data; } _info;
}

@property (readonly, nonatomic) long long positionType;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundsInWebView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundsInClientCoordinates;
@property (readonly, nonatomic, getter=isNearbyTarget) char nearbyTarget;
@property (readonly, nonatomic, getter=isPseudoElement) char pseudoElement;
@property (readonly, nonatomic, getter=isInShadowTree) char inShadowTree;
@property (readonly, nonatomic, getter=isInVisibilityAdjustmentSubtree) char inVisibilityAdjustmentSubtree;
@property (readonly, nonatomic) char hasLargeReplacedDescendant;
@property (readonly, nonatomic) char hasAudibleMedia;
@property (readonly, nonatomic) NSSet *mediaAndLinkURLs;
@property (readonly, copy, nonatomic) NSArray *selectors;
@property (readonly, copy, nonatomic) NSArray *selectorsIncludingShadowHosts;
@property (readonly, copy, nonatomic) NSString *renderedText;
@property (readonly, copy, nonatomic) NSString *searchableText;
@property (readonly, copy, nonatomic) NSString *screenReaderText;
@property (readonly, nonatomic) unsigned long long offsetEdges;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)getChildFrames:(id /* block */)a0;
- (char)isSameElement:(id)a0;
- (void)takeSnapshotWithCompletionHandler:(id /* block */)a0;

@end
