@class ABGroupEntry;
@protocol NSDraggingInfo;

@interface ABGroupDropScope : NSObject

@property (readonly) id<NSDraggingInfo> draggingInfo;
@property (readonly) ABGroupEntry *droppedEntry;
@property (readonly) long long childIndex;
@property (readonly) ABGroupEntry *selectedEntry;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDraggingInfo:(id)a0 droppedEntry:(id)a1 childIndex:(long long)a2 selectedEntry:(id)a3;

@end
