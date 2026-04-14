@interface CoreIDVShared.IdentityProofingUnorderedUIElementOption : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ subTitle;
    void /* unknown type, empty encoding */ bullets;
    void /* unknown type, empty encoding */ assessments;
    void /* unknown type, empty encoding */ accessibility;
    void /* unknown type, empty encoding */ caption;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
