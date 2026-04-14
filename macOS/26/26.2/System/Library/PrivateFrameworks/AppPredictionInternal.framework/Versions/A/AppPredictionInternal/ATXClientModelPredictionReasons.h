@class NSBundle;

@interface ATXClientModelPredictionReasons : NSObject {
    NSBundle *_bundle;
}

+ (id)clientModelPredictionReasonsBundlePath;

- (id)appMagicalMomentReasonForAnchorType:(long long)a0;
- (id)appBehavioralReason;
- (id)actionHeuristicReasonForHeuristicName:(id)a0;
- (id)actionAnchorReasonForAnchorType:(id)a0;
- (id)localizedStringForKey:(id)a0;
- (id)appLocationBasedAppClipReason;
- (void).cxx_destruct;
- (id)actionBehavioralReason;
- (id)appAnchorReasonForAnchorType:(id)a0;
- (id)init;
- (id)appHeroAppReason;
- (id)appInstalledAppClipReason;

@end
