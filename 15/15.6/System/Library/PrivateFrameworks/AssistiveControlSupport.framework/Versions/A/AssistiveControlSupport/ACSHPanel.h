@class NSString, NSArray, ACSHKeyboardData;

@interface ACSHPanel : ACSHPanelElement

@property (class, readonly, nonatomic) double windowPaddingZoomScaleFactor;

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } postContextButtonRect;
@property (nonatomic) double viewingZoomScale;
@property (nonatomic) double _viewingZoomNonProportionalScaleFactor;
@property (nonatomic) char _viewingZoomNonProportionalScaleFactorIsHorizontal;
@property (nonatomic) char _didRegisterForDisplayTheme;
@property (copy, nonatomic) NSString *_observedThemeKeyForACPE;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) char hidesAssistiveDock;
@property (nonatomic) char hidesAssistiveDockContextualButtons;
@property (nonatomic) unsigned long long showLocation;
@property (retain, nonatomic) NSArray *associatedApplications;
@property (retain, nonatomic) NSArray *preContextButtons;
@property (retain, nonatomic) NSArray *postContextButtons;
@property (nonatomic) unsigned long long screenPosition;
@property (retain, nonatomic) NSString *keyboardPhysicalType;
@property (nonatomic) long long keyboardHWType;
@property (readonly, nonatomic) ACSHKeyboardData *keyboardDataBasedOnPanelMetadata;
@property (readonly, nonatomic) ACSHKeyboardData *bestGuessKeyboardData;
@property (nonatomic) double viewingAlpha;
@property (nonatomic) unsigned long long displayOrder;
@property (nonatomic) unsigned long long scanStyle;
@property (nonatomic) unsigned long long glidingLensSize;
@property (nonatomic) char hidesAdjustments;
@property (nonatomic) char hidesHomeButton;
@property (nonatomic) char hidesMinimizeButton;
@property (nonatomic) char hidesTitlebar;
@property (nonatomic) char usesPinnedResizing;
@property (nonatomic) char hasTransientPosition;
@property (copy, nonatomic) NSString *currentInputSourceName;
@property (nonatomic) unsigned long long productSupportType;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } windowPadding;
@property (readonly, nonatomic) char isHomePanel;
@property (readonly, nonatomic) char isSystemPanel;
@property (readonly, nonatomic) char isSystemKeyboardPanel;
@property (readonly, nonatomic) char isDefaultKeyboard;
@property (readonly, nonatomic) char isDevicesPanel;
@property (readonly, nonatomic) char isMinimizedPanel;
@property (readonly, nonatomic) char hasTextPredictionLists;
@property (readonly, nonatomic) char hasGroupAsTopLevelElement;
@property (readonly, nonatomic) char viewingZoomScaleIsDefault;

+ (struct CGSize { double x0; double x1; })defaultIconSize;
+ (Class)classForDict:(id)a0;
+ (struct CGSize { double x0; double x1; })defaultIconPadding;
+ (id)panelByMergingPanels:(id)a0 basePanel:(id)a1 verticalNotHorizontal:(char)a2 generalOrientation:(unsigned long long)a3 customOptionsMapTable:(id)a4;
+ (struct CGSize { double x0; double x1; })windowPaddingForZoomScale:(double)a0 nonProportionalScaleFactor:(double)a1 isHorizontal:(char)a2;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithUndoManager:(id)a0;
- (void)_initialSetup;
- (double)viewingZoomNonProportionalFactorReturningHorizontalNotVertical:(char *)a0;
- (void)_configureWithPlistDictionary:(id)a0;
- (void)_setContextButtons:(id)a0 forLocalContextButtons:(id *)a1;
- (void)_updateThemeObservationForPanelEditor;
- (id)descriptionForDepth:(unsigned long long)a0;
- (id)dictionaryForSaving;
- (void)mergePanel:(id)a0 withRelativePosition:(unsigned long long)a1 orientation:(unsigned long long)a2 panelDistance:(double)a3;
- (unsigned long long)numberOfTrailingExtrasForItemAtIndexPath:(id)a0;
- (id)panelElementAtIndexPath:(id)a0;
- (id)panelElementsFromIndexPath:(id)a0;
- (id)panelElementsFromIndexPath:(id)a0 inclusiveOfStart:(char)a1;
- (id)resolvedDisplayColor;
- (unsigned long long)resolvedDisplayTheme;
- (unsigned long long)screenPosition;
- (void)setMinimizeButton:(char)a0;
- (void)setPanelElements:(id)a0;
- (void)setScreenPosition:(unsigned long long)a0;
- (void)setViewingZoomScaleIsDefault:(char)a0;
- (id)soundIdentifierForItemAtIndexPath:(id)a0;
- (id)spokenDescriptionForItemAtIndexPath:(id)a0;
- (char)updateContextButtonRects;
- (void)updateForModifiers:(unsigned long long)a0 lockedModifiers:(unsigned long long)a1 deadKeyState:(unsigned int)a2 autoShift:(char)a3;
- (void)updateToKeyboardLayout:(id)a0;
- (void)updateViewingZoomScale:(double)a0 nonProportionalScaleFactor:(double)a1 horizontalNotVertical:(char)a2 saveToPreferences:(char)a3;
- (void)updateViewingZoomScaleIsDefault:(char)a0;

@end
