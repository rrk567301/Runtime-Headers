@interface VCMediaKeyIndex : NSObject <NSCopying> {
    unsigned char _MKI[16];
    unsigned int _activeSize;
    BOOL _isMapped;
    unsigned char _mapKey;
}

@property (readonly) unsigned int activeSize;

+ (id)newMKIWithBytes:(char *)a0 bufferSize:(unsigned int)a1;
+ (id)makeInvalidKey;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isValid;
- (id)initWithUUID:(unsigned char[16])a0;
- (id)initWithNSUUID:(id)a0;
- (BOOL)setMapping:(unsigned char)a0;
- (id)initWithBytes:(char *)a0 bufferSize:(unsigned int)a1;
- (void)setActiveSize:(unsigned int)a0;
- (void)setMapKey:(unsigned char)a0;
- (const char *)MKI;
- (void)fullKeyBytes:(unsigned char[16])a0;
- (unsigned int)mappedKeySize;
- (unsigned int)mappedKeyBytes:(char *)a0 size:(unsigned int)a1;
- (BOOL)isStartingWithPrefix:(id)a0;

@end
