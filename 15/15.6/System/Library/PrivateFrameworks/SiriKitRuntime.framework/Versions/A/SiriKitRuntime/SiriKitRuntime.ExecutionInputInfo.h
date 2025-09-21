@class NSString;

@interface SiriKitRuntime.ExecutionInputInfo : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ parseId;
    void /* unknown type, empty encoding */ executePommes;
}

@property (class, nonatomic) char supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
