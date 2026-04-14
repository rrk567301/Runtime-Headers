@class NSString, _WMWindowShadowProperties, NSArray, NSSet, NSMutableArray, FBSScene;
@protocol WMWindowDelegate;

@interface _WMWindow : NSObject <FBSSceneDelegate> {
    BOOL _isInUpdateTransaction;
    unsigned long long _transactionModifiedProperties;
    unsigned long long _transactionModifiedServerProperties;
    NSMutableArray *_deferredSceneBlocks;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isInUserWindowSet) BOOL inUserWindowSet;
@property (nonatomic, getter=isMostlyOccluded) BOOL mostlyOccluded;
@property (readonly) FBSScene *scene;
@property (weak, nonatomic) id<WMWindowDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *windowIdentifier;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *typeIdentifier;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) unsigned long long frameEventTime;
@property (nonatomic) double frameTimestamp;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isVisible) BOOL visible;
@property (nonatomic) BOOL ignoresCycle;
@property (nonatomic) BOOL canHide;
@property (nonatomic) BOOL canBecomeFront;
@property (nonatomic) int windowLevel;
@property (nonatomic, setter=setCGWindowID:) unsigned int cgWindowID;
@property (nonatomic) unsigned long long presentationMode;
@property (nonatomic) BOOL inLiveResize;
@property (nonatomic) BOOL inDisplayReconfiguration;
@property (copy, nonatomic) NSString *persistentIdentifier;
@property (nonatomic) struct CPSProcessSerNum { unsigned int hi; unsigned int lo; } stubProcessSerialNumber;
@property (copy, nonatomic) _WMWindowShadowProperties *shadowProperties;
@property (nonatomic) BOOL usesActiveShadow;
@property (copy, nonatomic) NSArray *desktopIconRects;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } unmanagedFrame;
@property (nonatomic, getter=isManagedFrameUserDefined) BOOL managedFrameIsUserDefined;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL isKeyWindow;
@property (nonatomic) unsigned long long styleMask;
@property (nonatomic) unsigned long long explicitCollectionBehavior;
@property (nonatomic) unsigned long long implicitCollectionBehavior;
@property (readonly, copy, nonatomic) NSSet *tags;
@property (copy, nonatomic) NSArray *childWindows;
@property (copy, nonatomic) NSArray *childWindowInfos;
@property (readonly, copy, nonatomic) NSString *parentWindowIdentifier;

+ (id)windowWithIdentifier:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })yFlipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)applyTags:(id)a0 mask:(id)a1;
- (id)initWithWindowIdentifier:(id)a0;
- (void)performUpdatesUsingBlock:(id /* block */)a0;
- (BOOL)shouldManageFrame;
- (void)scene:(id)a0 didReceiveActions:(id)a1;
- (void)scene:(id)a0 didUpdateWithDiff:(id)a1 transitionContext:(id)a2 completion:(id /* block */)a3;
- (id)_dispatchingQueue;
- (void)_markPropertiesDirty:(unsigned long long)a0;
- (void)_markServerPropertiesDirty:(unsigned long long)a0;
- (void)_performWithScene:(id /* block */)a0;
- (void)_queueUpdateClientSceneSettingsWithBlock:(id /* block */)a0;
- (void)_sendSceneAction:(id)a0;
- (void)applyAgentPropertySnapshot:(id)a0;
- (void)resetAllServerProperties;
- (void)setParentWindowIdentifier:(id)a0;

@end
