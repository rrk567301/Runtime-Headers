@class FBSSceneSnapshotContext, BSActionResponder;

@interface FBSSceneSnapshotRequestHandle : NSObject {
    unsigned long long _type;
    FBSSceneSnapshotContext *_context;
    BSActionResponder *_responder;
    BOOL _canceled;
}

+ (id)handleForRequestType:(unsigned long long)a0 context:(id)a1;

- (void)_clearAction;
- (id)initWithRequestType:(unsigned long long)a0 context:(id)a1;
- (void).cxx_destruct;
- (void)performRequestForScene:(id)a0;
- (void)cancelRequest;

@end
