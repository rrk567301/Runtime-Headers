@class NSURL, NSData;

@interface PADiscreteFileLoadRequest : PALoadRequest

@property (readonly) NSURL *url;
@property (retain) NSData *fileData;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 cgOptions:(id)a1 cacheHint:(id)a2 tileHint:(id)a3 sizePolicy:(id)a4;
- (id)initWithURL:(id)a0 cgOptions:(id)a1 cacheHint:(id)a2 tileHint:(id)a3;
- (id)sortedKeyStringForDictionary:(id)a0;
- (id)keyForRequest;

@end
