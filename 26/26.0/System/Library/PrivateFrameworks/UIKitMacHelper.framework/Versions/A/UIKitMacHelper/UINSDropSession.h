@class NSArray, NSMutableArray;
@protocol UINSDropSessionHandler;

@interface UINSDropSession : NSObject <UINSDropSession> {
    id<UINSDropSessionHandler> _handler;
    unsigned long long _lastDropOperation;
    NSMutableArray *_filePromiseReaders;
}

@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, nonatomic) unsigned int sessionID;
@property (readonly, nonatomic) unsigned long long operationMask;

- (void)setHandler:(id)a0;
- (void).cxx_destruct;
- (void)sawDragEndEvent;
- (BOOL)performDragOperation:(id)a0 sceneView:(id)a1;
- (void)concludeDragOperation:(id)a0 sceneView:(id)a1;
- (void)draggingEnded:(id)a0 sceneView:(id)a1;
- (unsigned long long)draggingEntered:(id)a0 sceneView:(id)a1;
- (void)draggingExited:(id)a0 sceneView:(id)a1;
- (unsigned long long)draggingUpdated:(id)a0 sceneView:(id)a1;
- (id)initWithDraggingInfo:(id)a0 sessionID:(unsigned int)a1 sceneView:(id)a2;
- (BOOL)prepareForDragOperation:(id)a0 sceneView:(id)a1;
- (void)takeHandler:(id)a0;
- (void)takePotentialDropOperation:(unsigned long long)a0;

@end
