@class SCRCThreadKey, NSMutableDictionary, NSData, SCRWindowState;

@interface SCRDnDInfo : NSObject {
    long long _dragState;
    SCRWindowState *_windowState;
    SCRCThreadKey *_threadKey;
}

@property (retain) NSData *voCursorSnapShotData;
@property long long dragState;
@property (retain) SCRWindowState *windowState;
@property (retain) NSMutableDictionary *dragItemInfo;
@property (retain) NSMutableDictionary *destinationItemInfo;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)lastElementMarkedForDragAndDrop;
- (id)applicationOfLastElementMarkedForDragAndDrop;
- (void)setLastElementMarkedForDragAndDrop:(id)a0;
- (id)dragItemDescription;
- (void)setDragItemDescription:(id)a0;
- (id)dropDestinationElement;
- (void)setDropDestinationElement:(id)a0;
- (id)dropDestinationDescription;

@end
