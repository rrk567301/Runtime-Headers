@class WebTextIteratorPrivate;

@interface WebTextIterator : NSObject {
    WebTextIteratorPrivate *_private;
}

- (void)dealloc;
- (BOOL)atEnd;
- (id)initWithRange:(id)a0;
- (id)currentRange;
- (id)currentNode;
- (void)advance;
- (const unsigned short *)currentTextPointer;
- (unsigned long long)currentTextLength;
- (id)currentText;

@end
