@class NSArray, NSView, NSString, MULinkView;

@interface MUPlaceFooterAttributionController : NSObject {
    MULinkView *_attributionView;
}

@property (readonly, nonatomic) NSView *attributionView;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) NSArray *providerNames;
@property (readonly, nonatomic) NSString *formatString;
@property (readonly, nonatomic, getter=isInteractable) BOOL interactable;

+ (id)vendorAttributionFormatString;
+ (id)attributionControllerForMapItemAttribution:(id)a0;
+ (id)attributionControllerForMapItem:(id)a0;
+ (id)transitAttributionControllerForMapItem:(id)a0 transitLine:(id)a1;

- (void).cxx_destruct;
- (void)_updateTitle;
- (id)initWithFormatString:(id)a0 providerNames:(id)a1 isInteractable:(BOOL)a2;
- (void)_setupAttribution;
- (void)_attributionTapped;

@end
