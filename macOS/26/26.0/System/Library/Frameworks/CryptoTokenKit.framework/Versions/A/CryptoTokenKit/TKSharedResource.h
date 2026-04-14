@class TKSharedResourceSlot;

@interface TKSharedResource : NSObject {
    TKSharedResourceSlot *_slot;
}

@property (readonly, nonatomic) id object;

- (void)dealloc;
- (void)invalidate;
- (id)initWithSlot:(id)a0;
- (void).cxx_destruct;

@end
