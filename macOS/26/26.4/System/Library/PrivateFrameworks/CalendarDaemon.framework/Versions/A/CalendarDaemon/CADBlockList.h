@protocol CalBlockList;

@interface CADBlockList : NSObject {
    id<CalBlockList> _blockList;
}

- (void).cxx_destruct;
- (BOOL)isEventBlocked:(void *)a0;
- (id)initWithBlockList:(id)a0;
- (BOOL)isBlockListEmpty;

@end
