@class NSMutableDictionary, AFAnalyticsTurnBasedInstrumentationContext;
@protocol SRUIFPlatformHostingInstrumentationHandlerDelegate;

@interface SRUIFPlatformHostingInstrumentationHandler : NSObject {
    NSMutableDictionary *_machAbsoluteForAppearances;
    AFAnalyticsTurnBasedInstrumentationContext *_bringUpTurnIdentifier;
    AFAnalyticsTurnBasedInstrumentationContext *_dismissalTurnIdentifier;
}

@property (weak, nonatomic) id<SRUIFPlatformHostingInstrumentationHandlerDelegate> testDelegate;

- (id)init;
- (void).cxx_destruct;
- (void)_computeStateAndInstrumentIfNecessaryForEvent:(unsigned long long)a0;
- (void)appearanceDidChange:(unsigned long long)a0 machAbsoluteTime:(unsigned long long)a1;
- (void)hostingBringUpProcessedWithTurnIdenitfier:(id)a0;
- (void)hostingDismissalProcessedWithTurnIdenitfier:(id)a0;
- (void)instrumentForAppearanceEvent:(unsigned long long)a0 turn:(id)a1 machAbsoluteTime:(unsigned long long)a2;

@end
