@class NSString;

@interface MCResourceInformation : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ location;
    void /* unknown type, empty encoding */ metadata;
}

@property (class, nonatomic) char supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
