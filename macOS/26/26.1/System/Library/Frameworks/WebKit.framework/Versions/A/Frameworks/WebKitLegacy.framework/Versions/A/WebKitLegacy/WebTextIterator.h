@class WebTextIteratorPrivate;

@interface WebTextIterator : NSObject {
    WebTextIteratorPrivate *_private;
}

- (id)currentRange;
- (id)initWithRange:(id)a0;
- (void)dealloc;
- (id)currentText;
- (void)advance;
- (BOOL)atEnd;
- (id)currentNode;
- (unsigned long long)currentTextLength;
- (const unsigned short *)currentTextPointer;

@end
