@class NSString;

@interface SiriTTSInlineStreamingSignal : NSObject <NSSecureCoding> {
    void /* function */ text;
    void /* function */ identifier;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithText:(id)a0 identifier:(id)a1;

@end
