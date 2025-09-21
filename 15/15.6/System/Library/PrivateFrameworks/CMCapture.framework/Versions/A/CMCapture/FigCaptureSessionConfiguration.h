@class NSArray, NSString, FigCaptureSmartStyle, NSObject, NSMutableArray;
@protocol OS_tcc_identity;

@interface FigCaptureSessionConfiguration : NSObject <FigCaptureOSStateDataProvider, FigXPCCoding, NSCopying> {
    NSMutableArray *_connections;
}

@property (nonatomic) long long configurationID;
@property (readonly, nonatomic) NSArray *connectionConfigurations;
@property (readonly, nonatomic) NSArray *sourceConfigurations;
@property (readonly, nonatomic) NSArray *sinkConfigurations;
@property (retain, nonatomic) NSString *sessionPreset;
@property (nonatomic) char usesAppAudioSession;
@property (nonatomic) char configuresAppAudioSession;
@property (nonatomic) char configuresAppAudioSessionToMixWithOthers;
@property (nonatomic) char allowedToRunInMultitaskingMode;
@property (nonatomic, getter=isMultiCamSession) char multiCamSession;
@property (nonatomic) char xctestAuthorizedToStealDevice;
@property (nonatomic) char continuityCameraIsWired;
@property (nonatomic) int continuityCameraClientDeviceClass;
@property (nonatomic) char clientIsVOIP;
@property (nonatomic) char suppressVideoEffects;
@property (retain, nonatomic) NSObject<OS_tcc_identity> *tccIdentity;
@property (nonatomic) char checkIfFileAlreadyExistForMFO;
@property (nonatomic) char clientExpectsCameraMountedInLandscapeOrientation;
@property (readonly, nonatomic) char allCameraSourcesAreMetadataCameras;
@property (nonatomic) char smartStyleRenderingEnabled;
@property (nonatomic) long long smartStyleControlMode;
@property (copy, nonatomic) FigCaptureSmartStyle *smartStyle;
@property (nonatomic) int clientUIDeviceOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void)addConnectionConfiguration:(id)a0;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (id)osStatePropertyList;
- (void)removeConnectionConfiguration:(id)a0;

@end
