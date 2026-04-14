@class NSKeyBindingAtom, NSDictionary, NSSortedArray;

@interface NSKeyBindingManager : NSObject {
    NSDictionary *_dict;
    NSSortedArray *_atomArray;
    NSKeyBindingAtom *_argBinding;
    NSKeyBindingAtom *_quoteBinding;
    NSKeyBindingManager *_nextManager;
}

+ (void)initialize;
+ (void)cancel;
+ (long long)repeatCount;
+ (id)draggingKeyBindingManager;
+ (id)sharedKeyBindingManager;
+ (void)interpretKeyEvents:(id)a0 sender:(id)a1;
+ (void)setRepeatCountForNextCommand:(long long)a0;
+ (void)_setKeyBindingMonitor:(id)a0;
+ (id)_keyBindingMonitor;
+ (id)keyBindingManagerForClient:(id)a0;
+ (id)inputKeyBindingManager;

- (void)dealloc;
- (void)setDictionary:(id)a0;
- (id)dictionary;
- (id)initWithDictionary:(id)a0;
- (BOOL)interpretEventAsCommand:(id)a0 forClient:(id)a1;
- (void)_setNextKeyBindingManager:(id)a0;
- (void)setArgumentBinding:(id)a0;
- (void)setQuoteBinding:(id)a0;
- (void)interpretKeyEvents:(id)a0 forClient:(id)a1;
- (void)_monitorKeyBinding:(unsigned short)a0 flags:(unsigned long long)a1;
- (void)interpretEventAsText:(id)a0 forClient:(id)a1;
- (void)flushTextForClient:(id)a0;

@end
