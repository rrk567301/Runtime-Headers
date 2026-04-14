@class WebTextIteratorPrivate;

@interface WebTextIterator : NSObject {
    WebTextIteratorPrivate *_private;
}

- (id)initWithRange:(id)a0;
- (id)currentRange;
- (void)dealloc;
- (id)currentText;
- (void)advance;
- (BOOL)atEnd;
- (id)currentNode;
- (unsigned long long)currentTextLength;
- (const unsigned short *)currentTextPointer;

@end
