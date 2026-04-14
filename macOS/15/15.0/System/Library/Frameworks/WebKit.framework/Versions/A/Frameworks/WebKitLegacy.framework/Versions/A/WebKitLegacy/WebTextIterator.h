@class WebTextIteratorPrivate;

@interface WebTextIterator : NSObject {
    WebTextIteratorPrivate *_private;
}

- (void)dealloc;
- (BOOL)atEnd;
- (id)initWithRange:(id)a0;
- (void)advance;
- (id)currentRange;
- (id)currentNode;
- (id)currentText;
- (unsigned long long)currentTextLength;
- (const unsigned short *)currentTextPointer;

@end
