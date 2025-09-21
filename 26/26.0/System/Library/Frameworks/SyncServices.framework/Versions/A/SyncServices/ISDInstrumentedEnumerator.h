@class NSEnumerator, ISDCallHistory;

@interface ISDInstrumentedEnumerator : NSEnumerator {
    ISDCallHistory *_callHistory;
    NSEnumerator *_enumerator;
}

- (void)dealloc;
- (id)nextObject;
- (id)allObjects;
- (id)initWithCallHistory:(id)a0 enumerator:(id)a1;

@end
