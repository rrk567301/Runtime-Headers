@class NSString;

@interface CoreIDVShared.ImageQualityMetrics : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ blurriness;
    void /* unknown type, empty encoding */ laplaceBlur;
    void /* unknown type, empty encoding */ exposure;
    void /* unknown type, empty encoding */ cardDistortion;
    void /* unknown type, empty encoding */ faceToImageRatio;
    void /* unknown type, empty encoding */ faceCenteredRatio;
    void /* unknown type, empty encoding */ headPitch;
    void /* unknown type, empty encoding */ headRoll;
    void /* unknown type, empty encoding */ headYaw;
    void /* unknown type, empty encoding */ blinkingConfidence;
    void /* unknown type, empty encoding */ glassesConfidence;
    void /* unknown type, empty encoding */ sunglassesConfidence;
    void /* unknown type, empty encoding */ facemaskConfidence;
    void /* unknown type, empty encoding */ headgearConfidence;
    void /* unknown type, empty encoding */ captureTime;
    void /* unknown type, empty encoding */ faceCaptureQuality;
    void /* unknown type, empty encoding */ documentSize;
    void /* unknown type, empty encoding */ documentRotation;
    void /* unknown type, empty encoding */ documentSkew;
    void /* unknown type, empty encoding */ leftDrift;
    void /* unknown type, empty encoding */ rightDrift;
    void /* unknown type, empty encoding */ upDrift;
    void /* unknown type, empty encoding */ downDrift;
    void /* unknown type, empty encoding */ faceConfidences;
    void /* unknown type, empty encoding */ headgearConfidences;
    void /* unknown type, empty encoding */ numFaces;
    void /* unknown type, empty encoding */ luxLevel;
    void /* unknown type, empty encoding */ skinTone;
    void /* unknown type, empty encoding */ pdf417Detected;
    void /* unknown type, empty encoding */ isAAMVACompliant;
    void /* unknown type, empty encoding */ isAutoCaptured;
    void /* unknown type, empty encoding */ isFlashEnabled;
    void /* unknown type, empty encoding */ issuerNumber;
    void /* unknown type, empty encoding */ documentType;
    void /* unknown type, empty encoding */ glareDetected;
    void /* unknown type, empty encoding */ glareClusterSize;
    void /* unknown type, empty encoding */ glareAvgIntensity;
    void /* unknown type, empty encoding */ originalVertices;
    void /* unknown type, empty encoding */ targetVertices;
    void /* unknown type, empty encoding */ rectangleCorners;
    void /* unknown type, empty encoding */ documentCorners;
    void /* unknown type, empty encoding */ fuzzyMatchAssessment;
    void /* unknown type, empty encoding */ ocrMatchData;
    void /* unknown type, empty encoding */ ocrMatchCriteria;
    void /* unknown type, empty encoding */ modelDecision;
    void /* unknown type, empty encoding */ modelVersion;
    void /* unknown type, empty encoding */ exploration;
    void /* unknown type, empty encoding */ rescanCount;
    void /* unknown type, empty encoding */ livenessChute;
    void /* unknown type, empty encoding */ errorCode;
    void /* unknown type, empty encoding */ dobRepeatCount;
    void /* unknown type, empty encoding */ doeRepeatCount;
    void /* unknown type, empty encoding */ docNumberRepeatCount;
    void /* unknown type, empty encoding */ issuerNumberRepeatCount;
    void /* unknown type, empty encoding */ mrzScanResult;
    void /* unknown type, empty encoding */ ageOfDocument;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
