@class NSURL, NSData;

@interface PADiscreteFileLoadRequest : PALoadRequest

@property (readonly) NSURL *url;
@property (retain) NSData *fileData;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithURL:(id)a0 cgOptions:(id)a1 cacheHint:(id)a2 tileHint:(id)a3;
- (id)initWithURL:(id)a0 cgOptions:(id)a1 cacheHint:(id)a2 tileHint:(id)a3 sizePolicy:(id)a4;
- (id)keyForRequest;
- (id)sortedKeyStringForDictionary:(id)a0;

@end
