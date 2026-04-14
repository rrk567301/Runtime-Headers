@class AKController, AKDFRHighlightsController, NSGroupTouchBarItem, NSString, NSTouchBarItem, AKDFRTextController, AKDFRShapeController;

@interface AKDFRController : NSObject <NSTouchBarDelegate, AKDFRAnnotationPropertiesControllerDelegate>

@property (weak) AKController *controller;
@property BOOL centersWithPrincipleItems;
@property (retain) AKDFRTextController *textController;
@property (retain) AKDFRShapeController *shapeController;
@property (retain) AKDFRHighlightsController *dfrHighlightsController;
@property (retain) NSTouchBarItem *sketchItem;
@property (retain) NSTouchBarItem *textItem;
@property (retain, nonatomic) NSGroupTouchBarItem *mainTouchBar;
@property BOOL isInDFRAction;
@property (copy) id /* block */ updateDFRBlock;
@property (readonly, nonatomic) NSGroupTouchBarItem *highlightsTouchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_accessibilityLabelFromTag:(long long)a0;
+ (id)_accessibilityIdentifierForTag:(long long)a0;
+ (id)_imageFromTag:(long long)a0;
+ (id)createButtonWithTag:(long long)a0 target:(id)a1 action:(SEL)a2;

- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (id)touchBar:(id)a0 makeItemForIdentifier:(id)a1;
- (id)_touchBarItemIdentifiers;
- (void)updateTouchBar;
- (void)revalidateItems;
- (void)setFillColorUIDisplayToColor:(id)a0;
- (void)setStrokeColorUIDisplayToColor:(id)a0;
- (void)forwardToActionControllerFrom:(id)a0;
- (void)_revalidateItems;
- (void)lineWidthActionFrom:(id)a0;
- (id)_createButtonWithTag:(long long)a0;
- (id)_principleItemIdentifier;
- (void)_validateTextControls;
- (void)_validateShapeControls;
- (void)_validateLineTools;
- (void)_validateButton:(id)a0;
- (void)_validateDefaultTools;

@end
