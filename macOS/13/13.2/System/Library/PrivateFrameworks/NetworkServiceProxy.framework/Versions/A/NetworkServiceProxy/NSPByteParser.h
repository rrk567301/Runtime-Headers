@class NSData;

@interface NSPByteParser : NSObject <NSCopying>

@property (readonly) NSData *data;
@property (readonly) const char *bytes;
@property const char *cursor;
@property unsigned long long offset;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (BOOL)advanceBy:(unsigned long long)a0 andCopyTo:(void *)a1;
- (id)parseDomainName;
- (unsigned char)parse8Bits:(BOOL *)a0;
- (unsigned short)parse16Bits:(BOOL *)a0;
- (unsigned int)parse32Bits:(BOOL *)a0;
- (const char *)parseBytes:(unsigned long long)a0;
- (id)parseAddressWithFamily:(unsigned char)a0;

@end
