@interface VCMediaKeyIndex : NSObject <NSCopying> {
    unsigned char _MKI[16];
    unsigned int _activeSize;
}

@property unsigned long long uniquePrefixLength;
@property (readonly) unsigned int activeSize;

+ (id)makeInvalidKey;
+ (id)newMKIWithBytes:(char *)a0 bufferSize:(unsigned int)a1;

- (id)initWithUUID:(unsigned char[16])a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isValid;
- (BOOL)isEqual:(id)a0;
- (id)initWithNSUUID:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (const char *)MKI;
- (void)fullKeyBytes:(unsigned char[16])a0;
- (id)initWithBytes:(char *)a0 bufferSize:(unsigned int)a1;
- (id)initWithBytes:(char *)a0 bufferSize:(unsigned int)a1 uniquePrefixLength:(unsigned long long)a2;
- (id)initWithNSUUID:(id)a0 uniquePrefixLength:(unsigned long long)a1;
- (BOOL)isStartingWithPrefix:(id)a0;
- (void)setActiveSize:(unsigned int)a0;

@end
