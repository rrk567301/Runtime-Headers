@class NSString;

@interface _PFExternalReferenceData : NSData <NSCopying, NSMutableCopying> {
    _Atomic id _originalData;
    void *_bytesPtrForStore;
    unsigned long long _bytesLengthForStore;
    void *_bytesPtrForExternalReference;
    unsigned long long _bytesLengthForExternalReference;
    NSString *_externalReferenceLocation;
    NSString *_safeguardLocation;
    struct __externalDataFlags { unsigned char _cleanupOnDealloc : 1; unsigned char _dataProtectionLevel : 3; unsigned char _reserved : 4; } _externalDataFlags;
    _Atomic BOOL _isStoredExternally;
    _Atomic BOOL _hasMappedData;
}

+ (Class)classForKeyedUnarchiver;

- (id)copy;
- (const void *)bytes;
- (id)mutableCopy;
- (unsigned long long)length;
- (const char *)_externalReferenceLocation;
- (void)getBytes:(void *)a0 length:(unsigned long long)a1;
- (id)UUID;
- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initForExternalLocation:(id)a0 safeguardLocation:(id)a1 data:(id)a2 protectionLevel:(int)a3;
- (id)description;
- (id)externalReferenceLocationString;
- (id)databaseValue;
- (const void *)_bytesPtrForExternalReference;
- (BOOL)isEqualToData:(id)a0;
- (Class)classForCoder;
- (id)initWithStoreBytes:(const void *)a0 length:(unsigned long long)a1 externalLocation:(id)a2 safeguardLocation:(id)a3 protectionLevel:(int)a4;
- (void)dealloc;
- (const char *)_safeguardLocation;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)doCleanupOnDealloc;
- (id)_safeguardLocationString;
- (unsigned long long)_bytesLengthForExternalReference;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)_bytesLengthForStore;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)hasExternalReferenceContent;
- (void)_setBytesForExternalReference:(const void *)a0;
- (void)_moveExternalReferenceToPermanentLocation;
- (id)_originalData;
- (const void *)_bytesPtrForStore;
- (void)_writeExternalReferenceToInterimLocation;
- (void)_deleteExternalReferenceFromPermanentLocation;
- (int)preferredProtectionLevel;

@end
