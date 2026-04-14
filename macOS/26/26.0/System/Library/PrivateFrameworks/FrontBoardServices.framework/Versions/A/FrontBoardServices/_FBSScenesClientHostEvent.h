@class NSString, FBSSceneIdentity, FBSSceneSettingsDiff;

@interface _FBSScenesClientHostEvent : NSObject <BSInvalidatable> {
    BOOL _canCoalesce;
    FBSSceneIdentity *_identity;
    FBSSceneSettingsDiff *_diff;
    id /* block */ _completion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;

@end
