@class NSString;

@interface EncoreEvent : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ data;
    void /* unknown type, empty encoding */ serviceName;
    void /* unknown type, empty encoding */ jsonEncoder;
    void /* unknown type, empty encoding */ jsonDecoder;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
