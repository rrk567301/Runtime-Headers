@class WebTextIteratorPrivate;

@interface WebTextIterator : NSObject {
    WebTextIteratorPrivate *_private;
}

- (void)dealloc;
- (BOOL)atEnd;
- (id)initWithRange:(id)a0;
- (id)currentRange;
- (void)advance;
- (id)currentNode;
- (const unsigned short *)currentTextPointer;
- (unsigned long long)currentTextLength;
- (id)currentText;

@end
