@class NSScanner;

@interface HDOntologyTSVScanner : NSObject {
    NSScanner *_scanner;
}

@property (readonly, getter=isAtEnd) BOOL atEnd;

- (id)description;
- (id)init;
- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (BOOL)scanLongLong:(long long *)a0;
- (BOOL)scanString:(id *)a0;

@end
