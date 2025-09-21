@class IOServiceWriter;

@interface MSUiBootHeader : NSObject

@property unsigned int startLocation;
@property unsigned int imageAddress;
@property unsigned int headerGeneration;
@property (retain) IOServiceWriter *serviceWriter;

- (long long)compareTo:(id)a0;
- (BOOL)isValid;
- (void)dealloc;
- (void)invalidate;
- (unsigned int)length;
- (void)bumpGeneration;
- (id)initWithIOServiceWriter:(id)a0;
- (BOOL)loadHeaderAtOffset:(unsigned int)a0;
- (void)makeValid;
- (id)packStructure;
- (void)setAsFirstGeneration;
- (void)writeHeaderToOffset:(unsigned int)a0;

@end
