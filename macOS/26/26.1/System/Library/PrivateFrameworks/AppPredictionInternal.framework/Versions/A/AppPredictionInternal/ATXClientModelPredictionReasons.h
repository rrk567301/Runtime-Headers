@class NSBundle;

@interface ATXClientModelPredictionReasons : NSObject {
    NSBundle *_bundle;
}

+ (id)clientModelPredictionReasonsBundlePath;

- (id)localizedStringForKey:(id)a0;
- (id)appAnchorReasonForAnchorType:(id)a0;
- (id)actionHeuristicReasonForHeuristicName:(id)a0;
- (id)appHeroAppReason;
- (id)appMagicalMomentReasonForAnchorType:(long long)a0;
- (id)actionAnchorReasonForAnchorType:(id)a0;
- (void).cxx_destruct;
- (id)appInstalledAppClipReason;
- (id)actionBehavioralReason;
- (id)appLocationBasedAppClipReason;
- (id)appBehavioralReason;
- (id)init;

@end
