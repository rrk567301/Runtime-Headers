@class NSArray, NSString, SIRINLUEXTERNALSSU_INFERENCESsuInferenceResponse;

@interface CDMShortcutDetectorResponse : NSObject <NSSecureCoding> {
    void /* function */ spans;
    void /* function */ voiceCommandsUserParses;
    void /* function */ autoShortcutParses;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) BOOL shortcutDetected;
@property (nonatomic, readonly) NSArray *spans;
@property (nonatomic, readonly) SIRINLUEXTERNALSSU_INFERENCESsuInferenceResponse *ssuResponse;
@property (nonatomic, readonly) NSArray *voiceCommandsUserParses;
@property (nonatomic, readonly) NSArray *autoShortcutParses;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithShortcutDetected:(BOOL)a0 spans:(id)a1 ssuResponse:(id)a2 voiceCommandsUserParses:(id)a3 autoShortcutParses:(id)a4;

@end
