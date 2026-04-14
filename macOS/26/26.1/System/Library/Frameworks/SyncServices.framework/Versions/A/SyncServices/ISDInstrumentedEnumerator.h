@class NSEnumerator, ISDCallHistory;

@interface ISDInstrumentedEnumerator : NSEnumerator {
    ISDCallHistory *_callHistory;
    NSEnumerator *_enumerator;
}

- (id)nextObject;
- (id)allObjects;
- (void)dealloc;
- (id)initWithCallHistory:(id)a0 enumerator:(id)a1;

@end
