@class NSMutableArray, NSArray, NSObject, VNSequenceRequestHandler;
@protocol OS_dispatch_queue;

@interface FigObjectDetectionMetadataGenerator : NSObject {
    struct OpaqueFigSimpleMutex { } *_regionOfInterestMutex;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _regionOfInterest;
    unsigned int _maxHumanFaces;
    BOOL _humanFaceEyeDetectionEnabled;
    BOOL _humanFaceSmileDetectionEnabled;
    BOOL _humanFaceBlinkDetectionEnabled;
    unsigned int _maxHumanHeads;
    unsigned int _maxHumanBodies;
    unsigned int _maxHumanFullBodies;
    unsigned int _maxDogBodies;
    unsigned int _maxDogHeads;
    unsigned int _maxCatBodies;
    unsigned int _maxCatHeads;
    unsigned int _maxSalientObjects;
    unsigned int _maxSportsBalls;
    NSObject<OS_dispatch_queue> *_faceDetectQueue;
    VNSequenceRequestHandler *_faceTrackingSequenceRequestHandler;
    BOOL _faceLandmarksRequired;
    unsigned long long _nextFaceObjectID;
    struct OpaqueFigSimpleMutex { } *_timedVNObservationsMutex;
    NSMutableArray *_timedVNObservations;
}

@property (retain) NSArray *faceDetectRequests;
@property (retain) NSArray *faceTrackingRequests;
@property BOOL detectorsRunning;
@property BOOL trackersRunning;
@property BOOL prepared;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } regionOfInterest;
@property unsigned int maxHumanFaces;
@property BOOL humanFaceEyeDetectionEnabled;
@property BOOL humanFaceSmileDetectionEnabled;
@property BOOL humanFaceBlinkDetectionEnabled;
@property unsigned int maxHumanHeads;
@property unsigned int maxHumanBodies;
@property unsigned int maxHumanFullBodies;
@property unsigned int maxDogBodies;
@property unsigned int maxDogHeads;
@property unsigned int maxCatBodies;
@property unsigned int maxCatHeads;
@property unsigned int maxSalientObjects;
@property unsigned int maxSportsBalls;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void)unprepare;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)prepareForVideoFormat:(struct opaqueCMFormatDescription { } *)a0;
- (void)_attachDetectedObjectsToSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_detectFacesInSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_trackFacesInSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_addObservationsToODMGTimedVNObservations:(id)a0 kind:(id)a1 overrideTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;

@end
