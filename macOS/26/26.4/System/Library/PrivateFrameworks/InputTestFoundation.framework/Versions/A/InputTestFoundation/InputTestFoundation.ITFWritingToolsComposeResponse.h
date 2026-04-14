@interface InputTestFoundation.ITFWritingToolsComposeResponse : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ response;
    void /* unknown type, empty encoding */ range;
    void /* unknown type, empty encoding */ applicationBundleIdentifier;
    void /* unknown type, empty encoding */ error;
    void /* unknown type, empty encoding */ isFinished;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
