@class NSString;

@interface TCFileTextWriterProvider : TCXmlTextWriterProvider

@property (readonly, copy, nonatomic) NSString *filePath;

- (id)initWithFilePath:(id)a0;
- (void).cxx_destruct;
- (BOOL)setUp;

@end
