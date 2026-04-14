@class WebTextIteratorPrivate;

@interface WebTextIterator : NSObject {
    WebTextIteratorPrivate *_private;
}

- (void)dealloc;
- (BOOL)atEnd;
- (id)initWithRange:(id)a0;
- (id)currentText;
- (void)advance;
- (id)currentRange;
- (id)currentNode;
- (unsigned long long)currentTextLength;
- (const unsigned short *)currentTextPointer;

@end
