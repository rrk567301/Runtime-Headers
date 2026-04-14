@class NSMutableDictionary, NSMutableArray;

@interface ECRawMessageHeaders : NSObject {
    NSMutableDictionary *_headers;
    NSMutableArray *_orderedHeaders;
}

- (void).cxx_destruct;
- (id)allHeaders;
- (id)firstHeaderForKey:(id)a0;
- (id)allHeaderKeys;
- (id)headersForKey:(id)a0;
- (id)initWithHeaderString:(id)a0;

@end
