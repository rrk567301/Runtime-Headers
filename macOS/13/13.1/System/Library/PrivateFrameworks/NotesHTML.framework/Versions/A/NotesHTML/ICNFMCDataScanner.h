@class NSData;

@interface ICNFMCDataScanner : NSObject

@property (readonly, nonatomic) NSData *data;
@property (nonatomic) unsigned long long scanLocation;
@property (readonly, nonatomic) BOOL isAtEnd;

+ (id)scannerWithData:(id)a0;

- (id)init;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (BOOL)scanInteger:(long long *)a0;
- (BOOL)scanUpToCString:(const char *)a0 intoData:(id *)a1;
- (BOOL)scanByte:(char *)a0;
- (BOOL)scanData:(id)a0 intoData:(id *)a1;
- (BOOL)scanCString:(const char *)a0 intoData:(id *)a1;
- (BOOL)_scanBytes:(const void *)a0 length:(unsigned long long)a1 intoData:(id *)a2;
- (BOOL)scanBytesFromSet:(id)a0 intoData:(id *)a1;
- (BOOL)scanUpToData:(id)a0 intoData:(id *)a1;
- (BOOL)_scanUpToBytes:(const void *)a0 length:(unsigned long long)a1 intoData:(id *)a2;
- (BOOL)scanUpToBytesFromSet:(id)a0 intoData:(id *)a1;

@end
