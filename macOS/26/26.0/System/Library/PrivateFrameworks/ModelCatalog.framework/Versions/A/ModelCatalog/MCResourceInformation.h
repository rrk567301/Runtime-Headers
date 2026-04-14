@class NSString;

@interface MCResourceInformation : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ location;
    void /* unknown type, empty encoding */ metadata;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
