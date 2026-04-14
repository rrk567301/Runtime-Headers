@class NSSet, NSMutableSet;
@protocol RBSInvalidatable;

@interface RBSStateCaptureSetSegment : NSObject {
    id<RBSInvalidatable> _invalidatable;
    NSMutableSet *_items;
}

@property (readonly, nonatomic) NSSet *items;

- (void)removeItem:(id)a0;
- (void)addItem:(id)a0 withLength:(unsigned long long)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_stateCapture;
- (unsigned long long)count;
- (BOOL)containsItem:(id)a0;
- (id)init;

@end
