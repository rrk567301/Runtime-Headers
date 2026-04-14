@interface SpotlightUIShared.SUIPerformAppBrowseFilterCommand : SSPerformEntityQueryCommand {
    void /* unknown type, empty encoding */ categoryID;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)initWithProtobuf:(id)a0;
- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
