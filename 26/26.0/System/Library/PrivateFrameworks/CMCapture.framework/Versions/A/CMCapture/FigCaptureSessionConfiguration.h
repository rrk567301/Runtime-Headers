@class NSArray, NSString, FigCaptureSmartStyle, NSObject, NSMutableArray;
@protocol OS_tcc_identity;

@interface FigCaptureSessionConfiguration : NSObject <FigCaptureOSStateDataProvider, FigXPCCoding, NSCopying> {
    NSMutableArray *_connections;
}

@property (nonatomic) long long configurationID;
@property (nonatomic) unsigned long long clientSDKVersionToken;
@property (readonly, nonatomic) NSArray *connectionConfigurations;
@property (readonly, nonatomic) NSArray *sourceConfigurations;
@property (readonly, nonatomic) NSArray *sinkConfigurations;
@property (retain, nonatomic) NSString *sessionPreset;
@property (nonatomic) BOOL usesAppAudioSession;
@property (nonatomic) BOOL configuresAppAudioSession;
@property (nonatomic) BOOL configuresAppAudioSessionToMixWithOthers;
@property (nonatomic) BOOL configuresAppAudioSessionForBluetoothHighQualityRecording;
@property (nonatomic) BOOL allowedToRunInMultitaskingMode;
@property (nonatomic, getter=isMultiCamSession) BOOL multiCamSession;
@property (nonatomic) BOOL xctestAuthorizedToStealDevice;
@property (nonatomic) BOOL continuityCameraIsWired;
@property (nonatomic) int continuityCameraClientDeviceClass;
@property (nonatomic) BOOL clientIsVOIP;
@property (nonatomic) BOOL suppressVideoEffects;
@property (retain, nonatomic) NSObject<OS_tcc_identity> *tccIdentity;
@property (nonatomic) BOOL checkIfFileAlreadyExistForMFO;
@property (nonatomic) BOOL clientExpectsCameraMountedInLandscapeOrientation;
@property (readonly, nonatomic) BOOL allCameraSourcesAreMetadataCameras;
@property (nonatomic) BOOL smartStyleRenderingEnabled;
@property (nonatomic) long long smartStyleControlMode;
@property (copy, nonatomic) FigCaptureSmartStyle *smartStyle;
@property (nonatomic) int clientUIDeviceOrientation;
@property (nonatomic) BOOL automaticallyRunsDeferredStart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)briefDescription;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)osStatePropertyList;
- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (id)init;
- (void)addConnectionConfiguration:(id)a0;
- (void)removeConnectionConfiguration:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
