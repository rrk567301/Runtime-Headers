@interface TCXmlTextWriterProvider : NSObject

@property (readonly, nonatomic) struct _xmlTextWriter { } *textWriter;

- (void)dealloc;
- (char)tearDown;
- (char)setUp;
- (char)setUpWithTextWriter:(struct _xmlTextWriter { } *)a0;

@end
