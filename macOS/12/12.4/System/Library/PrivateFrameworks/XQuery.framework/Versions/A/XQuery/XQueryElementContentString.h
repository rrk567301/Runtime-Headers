@class NSMutableString;

@interface XQueryElementContentString : NSObject {
    NSMutableString *_string;
    BOOL _isXMLSpace;
}

+ (id)stringWithChar:(unsigned short)a0;
+ (id)stringWithWhiteSpace:(unsigned short)a0;

- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)string;
- (void)_setXMLSpace:(BOOL)a0;
- (void)addChar:(unsigned short)a0;
- (void)addWhiteSpace:(unsigned short)a0;
- (BOOL)isXMLSpace;

@end
