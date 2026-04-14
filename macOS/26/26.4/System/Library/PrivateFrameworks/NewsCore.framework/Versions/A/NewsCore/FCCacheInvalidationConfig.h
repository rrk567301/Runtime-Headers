@interface FCCacheInvalidationConfig : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ updatedAt;
    void /* unknown type, empty encoding */ records;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)recordInvalidationDatesForRecordType:(id)a0;

@end
