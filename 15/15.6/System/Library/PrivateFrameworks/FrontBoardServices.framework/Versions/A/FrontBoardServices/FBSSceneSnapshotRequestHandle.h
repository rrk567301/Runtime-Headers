@class FBSSceneSnapshotContext, BSActionResponder;

@interface FBSSceneSnapshotRequestHandle : NSObject {
    unsigned long long _type;
    FBSSceneSnapshotContext *_context;
    BSActionResponder *_responder;
    char _canceled;
}

+ (id)handleForRequestType:(unsigned long long)a0 context:(id)a1;

- (void).cxx_destruct;
- (void)cancelRequest;
- (void)_clearAction;
- (id)initWithRequestType:(unsigned long long)a0 context:(id)a1;
- (void)performRequestForScene:(id)a0;

@end
