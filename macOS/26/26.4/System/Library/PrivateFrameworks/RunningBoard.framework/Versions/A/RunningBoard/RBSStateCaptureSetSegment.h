@class NSSet, NSMutableSet;
@protocol RBSInvalidatable;

@interface RBSStateCaptureSetSegment : NSObject {
    id<RBSInvalidatable> _invalidatable;
    NSMutableSet *_items;
}

@property (readonly, nonatomic) NSSet *items;

- (void)addItem:(id)a0 withLength:(unsigned long long)a1;
- (void)removeItem:(id)a0;
- (id)_stateCapture;
- (BOOL)containsItem:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)count;
- (void)dealloc;

@end
