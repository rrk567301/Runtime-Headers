@class NSString, _WMWindowShadowProperties, NSArray, NSSet, _WMWindowTilingState;
@protocol WMWindowDelegate;

@interface _WMWindow : NSObject {
    char _isInUpdateTransaction;
    unsigned long long _transactionModifiedProperties;
    unsigned long long _transactionModifiedServerProperties;
}

@property (nonatomic, getter=isInUserWindowSet) char inUserWindowSet;
@property (nonatomic, getter=isMostlyOccluded) char mostlyOccluded;
@property (nonatomic, getter=isInAgentLiveResize) char inAgentLiveResize;
@property (nonatomic) char disableSnapshotRestoration;
@property (copy, nonatomic) _WMWindowTilingState *tilingState;
@property (weak, nonatomic) id<WMWindowDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *windowIdentifier;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *typeIdentifier;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) unsigned long long frameEventTime;
@property (nonatomic) unsigned long long displayChangeSeed;
@property (nonatomic) double frameTimestamp;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isVisible) char visible;
@property (nonatomic) char ignoresCycle;
@property (nonatomic) char canHide;
@property (nonatomic) char canBecomeFront;
@property (nonatomic) int windowLevel;
@property (nonatomic, setter=setCGWindowID:) unsigned int cgWindowID;
@property (nonatomic) unsigned long long presentationMode;
@property (nonatomic) char inLiveResize;
@property (nonatomic) char inDisplayReconfiguration;
@property (copy, nonatomic) NSString *persistentIdentifier;
@property (nonatomic) struct CPSProcessSerNum { unsigned int hi; unsigned int lo; } stubProcessSerialNumber;
@property (copy, nonatomic) _WMWindowShadowProperties *shadowProperties;
@property (nonatomic) char usesActiveShadow;
@property (copy, nonatomic) NSArray *desktopIconRects;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } unmanagedFrame;
@property (nonatomic, getter=isManagedFrameUserDefined) char managedFrameIsUserDefined;
@property (nonatomic) double cornerRadius;
@property (nonatomic) char isKeyWindow;
@property (nonatomic) unsigned long long styleMask;
@property (nonatomic) unsigned long long explicitCollectionBehavior;
@property (nonatomic) unsigned long long implicitCollectionBehavior;
@property (readonly, copy, nonatomic) NSSet *tags;
@property (copy, nonatomic) NSArray *childWindows;
@property (copy, nonatomic) NSArray *childWindowInfos;
@property (readonly, copy, nonatomic) NSString *parentWindowIdentifier;

- (void)dealloc;
- (id)debugDescription;
- (void).cxx_destruct;
- (char)applyTags:(id)a0 mask:(id)a1;
- (id)initWithWindowIdentifier:(id)a0;
- (void)performUpdatesUsingBlock:(id /* block */)a0;
- (char)shouldManageFrame;
- (void)_markPropertiesDirty:(unsigned long long)a0;
- (void)_markServerPropertiesDirty:(unsigned long long)a0;
- (void)applyAgentPropertySnapshot:(id)a0;
- (void)resetAllServerProperties;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 eventTime:(unsigned long long)a1 displayChangeSeed:(unsigned long long)a2;
- (void)setParentWindowIdentifier:(id)a0;

@end
