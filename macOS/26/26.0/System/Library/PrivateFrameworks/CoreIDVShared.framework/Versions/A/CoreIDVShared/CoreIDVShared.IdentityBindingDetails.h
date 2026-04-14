@interface CoreIDVShared.IdentityBindingDetails : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ templateUUIDs;
    void /* unknown type, empty encoding */ passDescriptions;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
