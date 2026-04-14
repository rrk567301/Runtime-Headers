@class NSString;

@interface SiriTTSInlineStreamingSignal : NSObject <NSSecureCoding> {
    void /* function */ text;
    void /* function */ identifier;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *description;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithText:(id)a0 identifier:(id)a1;

@end
