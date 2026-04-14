@class NSSet, NSMutableSet;
@protocol RBSInvalidatable;

@interface RBSStateCaptureSetSegment : NSObject {
    id<RBSInvalidatable> _invalidatable;
    NSMutableSet *_items;
}

@property (readonly, nonatomic) NSSet *items;

- (void)removeItem:(id)a0;
- (unsigned long long)count;
- (BOOL)containsItem:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_stateCapture;
- (void)addItem:(id)a0 withLength:(unsigned long long)a1;

@end
