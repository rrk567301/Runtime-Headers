@class NSString, SVXDeviceSetupFlowScene, NSArray;

@interface _SVXDeviceSetupFlowSceneMutation : NSObject <SVXDeviceSetupFlowSceneMutating> {
    SVXDeviceSetupFlowScene *_baseModel;
    long long _sceneID;
    NSArray *_displayKeyFrames;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasSceneID : 1; unsigned char hasDisplayKeyFrames : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSceneID:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)generate;
- (id)initWithBaseModel:(id)a0;
- (void)setDisplayKeyFrames:(id)a0;

@end
