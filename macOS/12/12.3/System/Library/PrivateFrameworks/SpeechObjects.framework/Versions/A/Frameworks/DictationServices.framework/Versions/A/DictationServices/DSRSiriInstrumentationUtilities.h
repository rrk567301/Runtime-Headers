@class AFAnalyticsTurnBasedInstrumentationContext;

@interface DSRSiriInstrumentationUtilities : NSObject

@property (retain, nonatomic) AFAnalyticsTurnBasedInstrumentationContext *instrumentationContext;
@property (readonly, retain, nonatomic) id turnIdentifier;

+ (id)sharedDSRSiriInstrumentationUtilities;
+ (id)schemaLocaleIdentifierWithLocaleIdentifier:(id)a0;

- (void)dealloc;
- (void)prepareInstrumentationForNewDictationSession;
- (void)logDictationStartedUsingMessageTracer:(id)a0;
- (void)logDictationDidLaunch;
- (void)logDictationFinishedUsingMessageTracer:(id)a0 finishedID:(long long)a1;

@end
