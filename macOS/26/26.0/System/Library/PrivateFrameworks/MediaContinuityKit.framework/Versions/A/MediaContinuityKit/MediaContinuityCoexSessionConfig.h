@class NSString;

@interface MediaContinuityCoexSessionConfig : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ usage;
    void /* unknown type, empty encoding */ remoteDeviceID;
    void /* unknown type, empty encoding */ interface;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
