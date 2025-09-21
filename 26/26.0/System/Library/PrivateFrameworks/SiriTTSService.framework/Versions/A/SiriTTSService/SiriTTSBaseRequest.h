@class NSURL, NSString, NSUUID;

@interface SiriTTSBaseRequest : NSObject <NSCopying, NSSecureCoding> {
    void /* unknown type, empty encoding */ requestCreatedTime;
    void /* unknown type, empty encoding */ clientBundleId;
    void /* unknown type, empty encoding */ accessoryId;
    void /* unknown type, empty encoding */ outputPath;
    void /* function */ sandboxToken;
    void /* unknown type, empty encoding */ logLinkId;
    void /* unknown type, empty encoding */ interactionLinkId;
    void /* function */ didReportInstrument;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSURL *outputPath;
@property (nonatomic, copy) NSString *sandboxToken;
@property (nonatomic, copy) NSUUID *logLinkId;
@property (nonatomic, copy) NSUUID *interactionLinkId;
@property (nonatomic, copy) id /* block */ didReportInstrument;
@property (nonatomic, readonly) NSString *description;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
