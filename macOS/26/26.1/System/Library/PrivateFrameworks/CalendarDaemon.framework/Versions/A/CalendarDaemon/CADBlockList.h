@protocol CalBlockList;

@interface CADBlockList : NSObject {
    id<CalBlockList> _blockList;
}

- (BOOL)isEventBlocked:(void *)a0;
- (void).cxx_destruct;
- (id)initWithBlockList:(id)a0;
- (BOOL)isBlockListEmpty;

@end
