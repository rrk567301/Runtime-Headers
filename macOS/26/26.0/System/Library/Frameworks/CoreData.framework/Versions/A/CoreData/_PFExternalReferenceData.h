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

- (void)_writeExternalReferenceToInterimLocation;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)externalReferenceLocationString;
- (void)doCleanupOnDealloc;
- (BOOL)isEqualToData:(id)a0;
- (void)getBytes:(void *)a0 length:(unsigned long long)a1;
- (id)UUID;
- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_setBytesForExternalReference:(const void *)a0;
- (unsigned long long)_bytesLengthForStore;
- (id)mutableCopy;
- (id)initWithStoreBytes:(const void *)a0 length:(unsigned long long)a1 externalLocation:(id)a2 safeguardLocation:(id)a3 protectionLevel:(int)a4;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)classForCoder;
- (const void *)bytes;
- (void)_moveExternalReferenceToPermanentLocation;
- (id)databaseValue;
- (id)copy;
- (id)_originalData;
- (int)preferredProtectionLevel;
- (const char *)_safeguardLocation;
- (id)_safeguardLocationString;
- (id)description;
- (unsigned long long)_bytesLengthForExternalReference;
- (BOOL)hasExternalReferenceContent;
- (const char *)_externalReferenceLocation;
- (const void *)_bytesPtrForStore;
- (unsigned long long)length;
- (void)_deleteExternalReferenceFromPermanentLocation;
- (BOOL)isEqual:(id)a0;
- (id)initForExternalLocation:(id)a0 safeguardLocation:(id)a1 data:(id)a2 protectionLevel:(int)a3;
- (const void *)_bytesPtrForExternalReference;

@end
