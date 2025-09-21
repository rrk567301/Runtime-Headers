@class NSData;

@interface ICNFMCDataScanner : NSObject

@property (readonly, nonatomic) NSData *data;
@property (nonatomic) unsigned long long scanLocation;
@property (readonly, nonatomic) char isAtEnd;

+ (id)scannerWithData:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (char)scanInteger:(long long *)a0;
- (char)scanUpToCString:(const char *)a0 intoData:(id *)a1;
- (char)_scanUpToBytes:(const void *)a0 length:(unsigned long long)a1 intoData:(id *)a2;
- (char)_scanBytes:(const void *)a0 length:(unsigned long long)a1 intoData:(id *)a2;
- (char)scanByte:(char *)a0;
- (char)scanBytesFromSet:(id)a0 intoData:(id *)a1;
- (char)scanCString:(const char *)a0 intoData:(id *)a1;
- (char)scanData:(id)a0 intoData:(id *)a1;
- (char)scanUpToBytesFromSet:(id)a0 intoData:(id *)a1;
- (char)scanUpToData:(id)a0 intoData:(id *)a1;

@end
