@class NSString;

@interface CoreIDVShared.IdentityProofingPrecursorPassMessage : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ message;
    void /* unknown type, empty encoding */ actions;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
