@class NSString;

@interface SiriKitRuntime.StartExecutionTurn : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ executionRequestId;
    void /* unknown type, empty encoding */ rootRequestId;
    void /* unknown type, empty encoding */ sessionId;
    void /* unknown type, empty encoding */ sessionConfiguration;
    void /* unknown type, empty encoding */ isTapToEdit;
    void /* unknown type, empty encoding */ isMUXEnabled;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
