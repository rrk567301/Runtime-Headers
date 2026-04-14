@interface CoreIDVShared.IdentityImageQuality : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ frontScanSettings;
    void /* unknown type, empty encoding */ backScanSettings;
    void /* unknown type, empty encoding */ frontIDSettings;
    void /* unknown type, empty encoding */ backIDSettings;
    void /* unknown type, empty encoding */ selfieSettings;
    void /* unknown type, empty encoding */ livenessSettings;
    void /* unknown type, empty encoding */ passiveSettings;
    void /* unknown type, empty encoding */ livenessBlockingCodes;
    void /* unknown type, empty encoding */ exploration;
    void /* unknown type, empty encoding */ bufferSize;
    void /* unknown type, empty encoding */ stableWindow;
    void /* unknown type, empty encoding */ idScanFrameRate;
    void /* unknown type, empty encoding */ videoFrameRate;
    void /* unknown type, empty encoding */ maxRectTravel;
    void /* unknown type, empty encoding */ resizeDimensions;
    void /* unknown type, empty encoding */ passportSettings;
    void /* unknown type, empty encoding */ passportFrameRate;
    void /* unknown type, empty encoding */ passportTimeout;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
