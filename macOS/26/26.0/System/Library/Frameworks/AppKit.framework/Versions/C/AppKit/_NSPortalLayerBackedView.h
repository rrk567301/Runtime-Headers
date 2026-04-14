@class NSView, NSString;

@interface _NSPortalLayerBackedView : NSView <NSPortalViewImplementation> {
    NSView *_sourceView;
    unsigned int _hidesSourceLayer;
}

@property BOOL hidesSourceLayer;
@property (retain) NSView *sourceView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
