@class NSString;

@interface SKRExecutionOutput : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ executionRequestId;
    void /* unknown type, empty encoding */ command;
    void /* unknown type, empty encoding */ contextUpdate;
    void /* unknown type, empty encoding */ executionSource;
    void /* unknown type, empty encoding */ inAppResponse;
    void /* unknown type, empty encoding */ fullPrint;
    void /* unknown type, empty encoding */ fullSpeak;
    void /* unknown type, empty encoding */ redactedFullPrint;
    void /* unknown type, empty encoding */ redactedFullSpeak;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
