@class NSScanner;

@interface HDOntologyTSVScanner : NSObject {
    NSScanner *_scanner;
}

@property (readonly, getter=isAtEnd) char atEnd;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (char)scanLongLong:(long long *)a0;
- (char)scanString:(id *)a0;

@end
