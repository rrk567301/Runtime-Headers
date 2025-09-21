@interface TSText.TSWPTopicNumbers : NSObject {
    void /* unknown type, empty encoding */ storage;
    void /* unknown type, empty encoding */ topicNumberData;
    void /* unknown type, empty encoding */ invalidCharIndex;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithStorage:(id)a0;
- (id)hintsForCharIndex:(unsigned long long)a0;
- (void)invalidateFromCharIndex:(unsigned long long)a0;
- (unsigned long long)listNumberForCharIndex:(unsigned long long)a0;
- (id)numberedListLabelForCharIndex:(unsigned long long)a0 includeFormatting:(char)a1;

@end
