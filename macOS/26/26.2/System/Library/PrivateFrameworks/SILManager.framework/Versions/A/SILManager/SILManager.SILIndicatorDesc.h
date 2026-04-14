@class NSString, NSArray, _TtC10SILManager14SILConstraints;

@interface SILManager.SILIndicatorDesc : SILManager.SILAssetDesc {
    void /* unknown type, empty encoding */ validator;
    void /* function */ deviceType;
    void /* function */ platform;
    void /* unknown type, empty encoding */ alphaOnly;
    void /* unknown type, empty encoding */ opaqueFillColor;
}

@property (nonatomic, readonly) long long sensorCategory;
@property (nonatomic, readonly) NSString *constraintsFile;
@property (nonatomic, readonly) NSArray *boundingBoxes;
@property (nonatomic, readonly) NSArray *dynamicBoundingBoxes;
@property (nonatomic, retain) _TtC10SILManager14SILConstraints *constraints;
@property (nonatomic, copy) NSString *deviceType;
@property (nonatomic, copy) NSString *platform;

+ (id)createFromData:(id)a0;
+ (BOOL)isCameraIndicator:(long long)a0;
+ (BOOL)isFaceIDIndicator:(long long)a0;
+ (BOOL)isMicrophoneAccessibilityIndicator:(long long)a0;
+ (BOOL)isMicrophoneIndicator:(long long)a0;

- (void).cxx_destruct;
- (BOOL)isCameraIndicator;
- (BOOL)isFaceIDIndicator;
- (BOOL)isMicrophoneAccessibilityIndicator;
- (BOOL)isMicrophoneIndicator;

@end
