@class NSString;

@interface IKScannerSelfTest : NSObject

@property (copy) NSString *path;
@property (copy) NSString *fileFormat;
@property long long bitDepth;
@property unsigned long long pixelDataType;
@property char rotate;
@property char colorCorrect;
@property char didScan;

- (void)dealloc;
- (id)initWithFormat:(id)a0 bitDepth:(long long)a1 pixelDataType:(unsigned long long)a2 rotate:(char)a3 colorCorrect:(char)a4 path:(id)a5;
- (id)documentName;

@end
