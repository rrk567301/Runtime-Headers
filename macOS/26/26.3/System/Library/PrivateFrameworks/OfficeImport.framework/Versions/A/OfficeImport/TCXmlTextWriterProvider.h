@interface TCXmlTextWriterProvider : NSObject

@property (readonly, nonatomic) struct _xmlTextWriter { } *textWriter;

- (BOOL)tearDown;
- (void)dealloc;
- (BOOL)setUp;
- (BOOL)setUpWithTextWriter:(struct _xmlTextWriter { } *)a0;

@end
