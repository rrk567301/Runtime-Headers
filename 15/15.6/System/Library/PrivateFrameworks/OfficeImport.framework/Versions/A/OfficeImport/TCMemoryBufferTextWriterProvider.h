@class NSMutableData;

@interface TCMemoryBufferTextWriterProvider : TCXmlTextWriterProvider

@property (readonly, retain, nonatomic) NSMutableData *memoryBuffer;

- (void).cxx_destruct;
- (char)setUp;
- (id)initWithMemoryBuffer:(id)a0;

@end
