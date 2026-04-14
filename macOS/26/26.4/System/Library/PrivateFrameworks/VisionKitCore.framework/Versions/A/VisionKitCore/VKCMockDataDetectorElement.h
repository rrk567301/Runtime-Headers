@class NSArray;

@interface VKCMockDataDetectorElement : VKCTextDataDetectorElement {
    unsigned long long _dataDetectorTypes;
    NSArray *_boundingQuads;
    struct _NSRange { unsigned long long location; unsigned long long length; } _characterRange;
}

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })characterRange;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)dataDetectorTypes;
- (id)boundingQuads;

@end
