@class SVXAssistantSiriAnalyticsProvider, SVXPowerInstrumentation;
@protocol MDModeProviding;

@interface SVXInstrumentationUtilities : NSObject {
    id<MDModeProviding> _modeProvider;
    SVXAssistantSiriAnalyticsProvider *_siriAnalyticsProvider;
    SVXPowerInstrumentation *_powerInstrumentation;
}

- (id)init;
- (void).cxx_destruct;
- (void)emitPatternExecutedEvent:(id)a0 addViews:(id)a1;
- (void)emitUUFRSaid:(id)a0 dialogIdentifier:(id)a1 dialogPhase:(id)a2;
- (void)emitUUFRSaidWithModeSupport:(id)a0 dialogIdentifier:(id)a1 dialogPhase:(id)a2 speakableText:(id)a3;
- (id)initWithModeProvider:(id)a0;
- (id)initWithModeProvider:(id)a0 siriAnalyticsProvider:(id)a1 powerInstrumentation:(id)a2;
- (id)initWithSiriAnalyticsProvider:(id)a0 powerInstrumentation:(id)a1;
- (int)rfSchemaRFPatternFromPatternType:(id)a0;
- (int)rfSchemaRFSiriModeFromResponseMode:(id)a0;

@end
