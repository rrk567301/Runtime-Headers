@protocol NSTextInput, NSObject;

@interface NSInputClientWrapper : NSObject <NSTextInput> {
    id<NSTextInput, NSObject> _realClient;
    id _lastString;
    struct _NSRange { unsigned long long location; unsigned long long length; } _lastRange;
}

+ (id)clientWrapperWithRealClient:(id)a0;
+ (void)invalidateConnectionsAsNecessary:(id)a0;
+ (void)terminateForClient:(id)a0;

- (void)unmarkText;
- (void)resetState;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })markedRange;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectedRange;
- (BOOL)hasMarkedText;
- (void)dealloc;
- (id)attributedSubstringFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (long long)conversationIdentifier;
- (void)setMarkedText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)insertText:(id)a0;
- (void)doCommandBySelector:(SEL)a0;
- (unsigned long long)characterIndexForPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })firstRectForCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithRealClient:(id)a0;
- (id)validAttributesForMarkedText;

@end
