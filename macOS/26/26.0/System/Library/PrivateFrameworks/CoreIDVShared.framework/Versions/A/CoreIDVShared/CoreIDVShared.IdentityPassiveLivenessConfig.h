@interface CoreIDVShared.IdentityPassiveLivenessConfig : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ maxRetakeCount;
    void /* unknown type, empty encoding */ sessionTimeout;
    void /* unknown type, empty encoding */ faceOutOfBoundFrames;
    void /* unknown type, empty encoding */ totalFrameCount;
    void /* unknown type, empty encoding */ minimumValidFrameCount;
    void /* unknown type, empty encoding */ requiresGoodLux;
    void /* unknown type, empty encoding */ enablePrintReplay;
    void /* unknown type, empty encoding */ disableStitchDetection;
    void /* unknown type, empty encoding */ enableAutoFlash;
    void /* unknown type, empty encoding */ useAuxiliaryURL;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
