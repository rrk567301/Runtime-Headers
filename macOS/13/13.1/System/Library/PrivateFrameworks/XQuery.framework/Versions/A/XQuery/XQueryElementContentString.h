@class NSMutableString;

@interface XQueryElementContentString : NSObject {
    NSMutableString *_string;
    BOOL _isXMLSpace;
}

+ (id)stringWithChar:(unsigned short)a0;
+ (id)stringWithWhiteSpace:(unsigned short)a0;

- (void)dealloc;
- (id)init;
- (void)finalize;
- (id)string;
- (void)_setXMLSpace:(BOOL)a0;
- (BOOL)isXMLSpace;
- (void)addWhiteSpace:(unsigned short)a0;
- (void)addChar:(unsigned short)a0;

@end
