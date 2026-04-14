@interface ConversationKit.DisplayObserver : NSObject {
    void /* unknown type, empty encoding */ display;
    void /* unknown type, empty encoding */ expectedUniqueID;
    void /* unknown type, empty encoding */ displayUniqueIDDidChange;
}

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
