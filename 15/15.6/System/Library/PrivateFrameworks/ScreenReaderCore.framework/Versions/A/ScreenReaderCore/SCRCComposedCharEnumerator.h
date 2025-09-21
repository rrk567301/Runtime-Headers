@class NSString;

@interface SCRCComposedCharEnumerator : NSEnumerator {
    char _done;
    NSString *_string;
    unsigned long long _indexOfCurrentComposedCharacter;
}

- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (id)allObjects;
- (id)nextObject;

@end
