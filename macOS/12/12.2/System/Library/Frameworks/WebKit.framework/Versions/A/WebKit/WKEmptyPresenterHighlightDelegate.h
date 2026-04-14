@class NSString;

@interface WKEmptyPresenterHighlightDelegate : NSObject <RVPresenterHighlightDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)revealContext:(id)a0 rectsForItem:(id)a1;

@end
