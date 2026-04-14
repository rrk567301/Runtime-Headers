@interface ModelCatalog.DebugInformationWrapper : NSObject <NSSecureCoding, NSCopying> {
    void /* unknown type, empty encoding */ data;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
