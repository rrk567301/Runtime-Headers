@class NSString;

@interface SiriTTSInlineStreamingSignal : NSObject <NSSecureCoding> {
    void /* function */ text;
    void /* function */ identifier;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithText:(id)a0 identifier:(id)a1;

@end
