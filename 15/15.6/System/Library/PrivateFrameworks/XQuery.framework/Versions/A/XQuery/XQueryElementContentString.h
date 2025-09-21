@class NSMutableString;

@interface XQueryElementContentString : NSObject {
    NSMutableString *_string;
    char _isXMLSpace;
}

+ (id)stringWithChar:(unsigned short)a0;
+ (id)stringWithWhiteSpace:(unsigned short)a0;

- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)string;
- (void)addChar:(unsigned short)a0;
- (void)_setXMLSpace:(char)a0;
- (void)addWhiteSpace:(unsigned short)a0;
- (char)isXMLSpace;

@end
