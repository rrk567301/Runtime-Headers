@class NSString;

@interface SiriKitRuntime.FlowTaskXPC : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ isClientInitiated;
    void /* unknown type, empty encoding */ creationTime;
}

@property (class, nonatomic, readonly) char supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
