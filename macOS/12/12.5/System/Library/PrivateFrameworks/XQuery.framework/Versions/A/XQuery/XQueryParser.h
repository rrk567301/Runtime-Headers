@class NSString, NSArray, XQueryParsedModule, NSMutableArray;

@interface XQueryParser : NSObject {
    NSMutableArray *_errors;
    NSString *_source;
    NSArray *_sourceLines;
    const char *_utf8String;
    long long _length;
    unsigned long long _position;
    XQueryParsedModule *_parsedModule;
}

+ (void)initialize;
+ (id)currentParser;
+ (id)parserWithSource:(id)a0;

- (void)finalize;
- (void)dealloc;
- (id)source;
- (void)setError:(id)a0;
- (id)initWithSource:(id)a0;
- (void)parse;
- (id)errors;
- (id)sourceLine:(long long)a0;
- (id)parsedModule;
- (long long)readChars:(unsigned long long)a0 toBuffer:(char *)a1;

@end
