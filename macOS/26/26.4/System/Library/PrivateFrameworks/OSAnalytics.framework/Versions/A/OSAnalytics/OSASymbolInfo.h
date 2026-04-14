@class NSString;

@interface OSASymbolInfo : NSObject {
    unsigned char _uuid[16];
    NSString *legacy_arch;
}

@property unsigned long long start;
@property unsigned long long size;
@property (readonly) NSString *path;
@property (retain) NSString *name;
@property BOOL isAppleCode;
@property (retain) NSString *cpuArch;

- (void)setPath:(id)a0;
- (void).cxx_destruct;
- (id)initWithAddress:(unsigned long long)a0 size:(unsigned long long)a1 for:(unsigned char[16])a2;
- (id)get_uuid;
- (id)initWithSharedCache:(unsigned char[16])a0 atBaseAddress:(unsigned long long)a1;

@end
