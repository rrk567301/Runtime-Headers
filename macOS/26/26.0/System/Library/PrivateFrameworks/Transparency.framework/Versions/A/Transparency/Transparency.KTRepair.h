@class NSString;

@interface Transparency.KTRepair : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ options;
    void /* unknown type, empty encoding */ hardReset;
    void /* unknown type, empty encoding */ nextRepair;
    void /* unknown type, empty encoding */ bypassRateControl;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

+ (id)hardResetRepair;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
