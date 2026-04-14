@class NSString;

@interface LighthouseBackground.MLHostResult : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ status;
    void /* unknown type, empty encoding */ policy;
    void /* unknown type, empty encoding */ error;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
