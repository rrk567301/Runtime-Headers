@class WebTextIteratorPrivate;

@interface WebTextIterator : NSObject {
    WebTextIteratorPrivate *_private;
}

- (void)dealloc;
- (id)currentRange;
- (id)initWithRange:(id)a0;
- (id)currentText;
- (void)advance;
- (BOOL)atEnd;
- (id)currentNode;
- (unsigned long long)currentTextLength;
- (const unsigned short *)currentTextPointer;

@end
