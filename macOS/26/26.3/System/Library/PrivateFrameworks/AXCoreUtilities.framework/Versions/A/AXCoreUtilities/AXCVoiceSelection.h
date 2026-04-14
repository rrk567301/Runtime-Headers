@class NSString, NSDictionary, NSArray, NSNumber;

@interface AXCVoiceSelection : NSObject {
    void /* function */ voiceId;
    void /* function */ voiceSettings;
    void /* function */ effects;
    void /* function */ boundLanguage;
}

@property (nonatomic, copy) NSString *voiceId;
@property (nonatomic, retain) NSNumber *rate;
@property (nonatomic, retain) NSNumber *pitch;
@property (nonatomic, retain) NSNumber *volume;
@property (nonatomic, copy) NSDictionary *voiceSettings;
@property (nonatomic, copy) NSArray *effects;
@property (nonatomic, copy) NSString *boundLanguage;

- (id)init;
- (void).cxx_destruct;
- (id)initWithVoiceId:(id)a0 rate:(id)a1 pitch:(id)a2 volume:(id)a3 voiceSettings:(id)a4 effects:(id)a5;
- (id)initWithVoiceId:(id)a0 rate:(id)a1 pitch:(id)a2 volume:(id)a3 voiceSettings:(id)a4 effects:(id)a5 boundLanguage:(id)a6;

@end
