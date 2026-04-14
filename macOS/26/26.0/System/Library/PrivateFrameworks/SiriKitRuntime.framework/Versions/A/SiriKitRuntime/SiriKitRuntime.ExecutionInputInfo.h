@class NSString;

@interface SiriKitRuntime.ExecutionInputInfo : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ parseId;
    void /* unknown type, empty encoding */ executePommes;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
