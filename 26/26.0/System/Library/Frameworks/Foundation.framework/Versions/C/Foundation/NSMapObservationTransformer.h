@interface NSMapObservationTransformer : NSObservationTransformer {
    id _block;
    int _tag;
}

- (void)dealloc;
- (id)initWithBlock:(id)a0 tag:(int)a1;
- (void)_receiveBox:(id)a0;

@end
