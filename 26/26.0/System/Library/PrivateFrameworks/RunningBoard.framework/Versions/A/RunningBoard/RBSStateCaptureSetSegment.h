@class NSSet, NSMutableSet;
@protocol RBSInvalidatable;

@interface RBSStateCaptureSetSegment : NSObject {
    id<RBSInvalidatable> _invalidatable;
    NSMutableSet *_items;
}

@property (readonly, nonatomic) NSSet *items;

- (void)removeItem:(id)a0;
- (void)dealloc;
- (unsigned long long)count;
- (id)init;
- (void)addItem:(id)a0 withLength:(unsigned long long)a1;
- (id)_stateCapture;
- (void).cxx_destruct;
- (BOOL)containsItem:(id)a0;

@end
