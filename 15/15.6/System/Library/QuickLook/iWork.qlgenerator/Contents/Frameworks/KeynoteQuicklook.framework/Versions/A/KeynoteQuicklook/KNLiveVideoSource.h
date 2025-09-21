@class KNLiveVideoSourceCollaborationCommandUsageState, NSArray, NSString, TSPData, KNLiveVideoCaptureDeviceDescription;

@interface KNLiveVideoSource : TSPObject <TSKModel, TSPCopying> {
    NSString *_name;
    long long _symbolImageIdentifier;
    long long _symbolTintColorIdentifier;
    char _isDefaultSource;
    KNLiveVideoCaptureDeviceDescription *_captureDeviceDescription;
    char _definedCaptureDeviceDescription;
    char _definedPosterImageData;
    char _definedSymbolAbbreviationText;
    KNLiveVideoCaptureDeviceDescription *_defaultSourceCaptureDeviceDescription;
}

@property (class, readonly, nonatomic) NSArray *availableSymbolImageIdentifiers;
@property (class, readonly, nonatomic) long long defaultSymbolImageIdentifier;
@property (class, readonly, nonatomic) long long defaultSymbolTintColorIdentifier;
@property (class, readonly, nonatomic) NSArray *availableSymbolTintColorIdentifiers;
@property (class, readonly, nonatomic) NSString *accessibilityLabelForCameraArrowTriangle2CirclePath;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) KNLiveVideoCaptureDeviceDescription *captureDeviceDescription;
@property (readonly, nonatomic) char canChangeCaptureDeviceDescription;
@property (retain, nonatomic) TSPData *posterImageData;
@property (copy, nonatomic) NSString *symbolAbbreviationText;
@property (nonatomic) long long symbolImageIdentifier;
@property (nonatomic) long long symbolTintColorIdentifier;
@property (readonly, nonatomic) char canBeImplicitlyRemovedOnUndo;
@property (readonly, nonatomic) KNLiveVideoSourceCollaborationCommandUsageState *collaborationCommandUsageState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)needsObjectUUID;
+ (id)colorForSymbolTintColorIdentifier:(long long)a0;
+ (id)colorSetForSymbolTintColorIdentifier:(long long)a0;
+ (long long)defaultSymbolImageIdentifierForCaptureDeviceIdentifier:(id)a0;
+ (long long)p_archivedSymbolImageIdentifierForSymbolImageIdentifier:(long long)a0;
+ (long long)p_archivedSymbolTintColorIdentifierForSymbolTintColorIdentifier:(long long)a0;
+ (id)systemImageNameForSymbolImageIdentifier:(long long)a0;

- (void).cxx_destruct;
- (id)copyWithContext:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)didInitFromSOS;
- (void)i_updateDefaultSourceCaptureDeviceDescription:(id)a0;
- (id)initWithContext:(id)a0 name:(id)a1;
- (id)initWithContext:(id)a0 name:(id)a1 isDefaultSource:(char)a2;
- (char)isEquivalentToLiveVideoSource:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void)rollbackToCollaborationCommandUsageState:(id)a0;
- (char)supportsBackgroundKind:(long long)a0;
- (void)willBeUsedByCollaborationCommandWithUsageToken:(id)a0;

@end
