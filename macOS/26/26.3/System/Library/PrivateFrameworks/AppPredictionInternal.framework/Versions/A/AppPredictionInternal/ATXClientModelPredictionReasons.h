@class NSBundle;

@interface ATXClientModelPredictionReasons : NSObject {
    NSBundle *_bundle;
}

+ (id)clientModelPredictionReasonsBundlePath;

- (id)appBehavioralReason;
- (id)appMagicalMomentReasonForAnchorType:(long long)a0;
- (id)actionAnchorReasonForAnchorType:(id)a0;
- (id)init;
- (id)appHeroAppReason;
- (id)appLocationBasedAppClipReason;
- (void).cxx_destruct;
- (id)appAnchorReasonForAnchorType:(id)a0;
- (id)appInstalledAppClipReason;
- (id)localizedStringForKey:(id)a0;
- (id)actionHeuristicReasonForHeuristicName:(id)a0;
- (id)actionBehavioralReason;

@end
