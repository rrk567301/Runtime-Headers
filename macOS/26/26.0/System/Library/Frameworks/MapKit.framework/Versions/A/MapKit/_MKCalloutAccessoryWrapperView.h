@class NSString, NSView;
@protocol _MKCalloutAccessoryView;

@interface _MKCalloutAccessoryWrapperView : NSView <_MKCalloutAccessoryView> {
    NSView<_MKCalloutAccessoryView> *_view;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithView:(id)a0;
- (BOOL)isFlipped;
- (void).cxx_destruct;
- (id)_mapkit_accessoryControlToExtendWithCallout;
- (double)_mapkit_minimumCalloutWidthMultiplier;

@end
