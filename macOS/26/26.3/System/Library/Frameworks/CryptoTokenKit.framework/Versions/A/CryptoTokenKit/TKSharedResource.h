@class TKSharedResourceSlot;

@interface TKSharedResource : NSObject {
    TKSharedResourceSlot *_slot;
}

@property (readonly, nonatomic) id object;

- (void)invalidate;
- (id)initWithSlot:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
