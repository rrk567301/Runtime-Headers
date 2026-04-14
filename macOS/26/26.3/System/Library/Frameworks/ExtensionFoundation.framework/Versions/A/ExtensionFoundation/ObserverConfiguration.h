@interface ObserverConfiguration : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ _id;
    void /* unknown type, empty encoding */ _extensionPointRecords;
    void /* unknown type, empty encoding */ _options;
    void /* unknown type, empty encoding */ _endpoint;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
