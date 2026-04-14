@class NSBundle;

@interface ATXClientModelPredictionReasons : NSObject {
    NSBundle *_bundle;
}

+ (id)clientModelPredictionReasonsBundlePath;

- (id)actionBehavioralReason;
- (id)actionAnchorReasonForAnchorType:(id)a0;
- (id)appBehavioralReason;
- (id)init;
- (id)actionHeuristicReasonForHeuristicName:(id)a0;
- (id)appMagicalMomentReasonForAnchorType:(long long)a0;
- (id)localizedStringForKey:(id)a0;
- (id)appLocationBasedAppClipReason;
- (id)appInstalledAppClipReason;
- (id)appHeroAppReason;
- (id)appAnchorReasonForAnchorType:(id)a0;
- (void).cxx_destruct;

@end
