@interface ModelCatalog.DebugInformationWrapper : NSObject <NSSecureCoding, NSCopying> {
    void /* unknown type, empty encoding */ data;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;

@end
