@class NSString, CALayer, NSViewBackingStore, NSViewBackingLayerContentLayer;

@interface NSViewBackingLayerContents : NSObject <CARenderValue> {
    NSViewBackingStore *_backingStore;
    NSViewBackingLayerContentLayer *_contentLayer;
}

@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } definedRect;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } retainedContentRect;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } requiredContentRect;
@property double scale;
@property (readonly) CALayer *contentLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
