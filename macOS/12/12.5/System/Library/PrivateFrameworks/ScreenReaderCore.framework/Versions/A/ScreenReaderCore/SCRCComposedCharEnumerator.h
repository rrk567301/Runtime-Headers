@class NSString;

@interface SCRCComposedCharEnumerator : NSEnumerator {
    BOOL _done;
    NSString *_string;
    unsigned long long _indexOfCurrentComposedCharacter;
}

- (id)allObjects;
- (id)nextObject;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;

@end
