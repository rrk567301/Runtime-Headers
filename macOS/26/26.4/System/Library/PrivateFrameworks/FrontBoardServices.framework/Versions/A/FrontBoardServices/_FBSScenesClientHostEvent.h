@class FBSSceneSettingsDiff, NSString, NSMutableArray, FBSSceneIdentity;

@interface _FBSScenesClientHostEvent : NSObject <BSInvalidatable> {
    NSMutableArray *_completions;
    BOOL _canCoalesce;
    FBSSceneIdentity *_identity;
    FBSSceneSettingsDiff *_diff;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
