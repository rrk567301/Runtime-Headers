@interface APFoundation.ActionStoreRecord : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ impressionId;
    void /* unknown type, empty encoding */ adRecord;
    void /* unknown type, empty encoding */ eventRecords;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
