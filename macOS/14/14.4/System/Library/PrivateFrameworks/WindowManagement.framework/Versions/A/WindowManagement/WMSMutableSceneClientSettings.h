@class NSString, NSArray, NSSet, WMSSceneShadowProperties;

@interface WMSMutableSceneClientSettings : FBSMutableSceneClientSettings

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) int windowLevel;
@property (nonatomic) unsigned int cgWindowID;
@property (nonatomic) double cornerRadius;
@property (nonatomic, copy) NSArray *childWindowInfos;
@property (nonatomic) long long type;
@property (nonatomic, copy) NSString *typeIdentifier;
@property (nonatomic) unsigned long long frameEventTime;
@property (nonatomic) long long presentationMode;
@property (nonatomic, copy) NSString *persistentIdentifier;
@property (nonatomic) struct CPSProcessSerNum { unsigned int x0; unsigned int x1; } stubProcessSerialNumber;
@property (nonatomic, retain) WMSSceneShadowProperties *shadowProperties;
@property (nonatomic, copy) NSArray *desktopIconRects;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } unmanagedFrame;
@property (nonatomic) unsigned long long styleMask;
@property (nonatomic) unsigned long long explicitCollectionBehavior;
@property (nonatomic) unsigned long long implicitCollectionBehavior;
@property (nonatomic, copy) NSSet *tags;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (id)initWithSettings:(id)a0;

@end
