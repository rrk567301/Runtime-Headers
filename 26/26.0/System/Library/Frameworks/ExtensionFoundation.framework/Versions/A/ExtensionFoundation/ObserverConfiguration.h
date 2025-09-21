@interface ObserverConfiguration : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ _id;
    void /* unknown type, empty encoding */ _extensionPointRecords;
    void /* unknown type, empty encoding */ _options;
    void /* unknown type, empty encoding */ _endpoint;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
