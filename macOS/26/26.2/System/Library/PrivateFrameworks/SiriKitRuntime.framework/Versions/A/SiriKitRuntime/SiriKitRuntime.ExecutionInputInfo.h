@class NSString;

@interface SiriKitRuntime.ExecutionInputInfo : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ parseId;
    void /* unknown type, empty encoding */ executePommes;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
