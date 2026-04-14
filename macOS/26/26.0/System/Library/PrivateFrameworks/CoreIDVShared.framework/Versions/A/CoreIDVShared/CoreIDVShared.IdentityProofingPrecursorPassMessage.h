@class NSString;

@interface CoreIDVShared.IdentityProofingPrecursorPassMessage : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ message;
    void /* unknown type, empty encoding */ actions;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
