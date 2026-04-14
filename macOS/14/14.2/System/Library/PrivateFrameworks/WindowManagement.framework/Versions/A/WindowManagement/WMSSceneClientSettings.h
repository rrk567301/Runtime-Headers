@class NSString, NSArray, NSSet, WMSSceneShadowProperties;

@interface WMSSceneClientSettings : FBSSceneClientSettings

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) int windowLevel;
@property (nonatomic, readonly) unsigned int cgWindowID;
@property (nonatomic, readonly) double cornerRadius;
@property (nonatomic, readonly) NSArray *childWindowInfos;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSString *typeIdentifier;
@property (nonatomic, readonly) unsigned long long frameEventTime;
@property (nonatomic, readonly) long long presentationMode;
@property (nonatomic, readonly) NSString *persistentIdentifier;
@property (nonatomic, readonly) struct CPSProcessSerNum { unsigned int x0; unsigned int x1; } stubProcessSerialNumber;
@property (nonatomic, readonly) WMSSceneShadowProperties *shadowProperties;
@property (nonatomic, readonly) NSArray *desktopIconRects;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } unmanagedFrame;
@property (nonatomic, readonly) unsigned long long styleMask;
@property (nonatomic, readonly) unsigned long long explicitCollectionBehavior;
@property (nonatomic, readonly) unsigned long long implicitCollectionBehavior;
@property (nonatomic, readonly) NSSet *tags;

- (id)init;
- (id)mutableCopyWithZone:(void *)a0;
- (id)initWithSettings:(id)a0;

@end
