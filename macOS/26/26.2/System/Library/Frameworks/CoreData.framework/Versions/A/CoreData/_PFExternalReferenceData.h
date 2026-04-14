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

- (unsigned long long)_bytesLengthForStore;
- (const void *)_bytesPtrForStore;
- (void)_deleteExternalReferenceFromPermanentLocation;
- (BOOL)isEqual:(id)a0;
- (Class)classForCoder;
- (BOOL)hasExternalReferenceContent;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)_bytesLengthForExternalReference;
- (const void *)bytes;
- (BOOL)isEqualToData:(id)a0;
- (void)doCleanupOnDealloc;
- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)length;
- (id)initForExternalLocation:(id)a0 safeguardLocation:(id)a1 data:(id)a2 protectionLevel:(int)a3;
- (id)databaseValue;
- (int)preferredProtectionLevel;
- (const char *)_externalReferenceLocation;
- (id)copy;
- (id)description;
- (id)UUID;
- (const char *)_safeguardLocation;
- (void)getBytes:(void *)a0 length:(unsigned long long)a1;
- (id)initWithStoreBytes:(const void *)a0 length:(unsigned long long)a1 externalLocation:(id)a2 safeguardLocation:(id)a3 protectionLevel:(int)a4;
- (id)_safeguardLocationString;
- (const void *)_bytesPtrForExternalReference;
- (void)_setBytesForExternalReference:(const void *)a0;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)mutableCopy;
- (id)_originalData;
- (id)externalReferenceLocationString;
- (void)_moveExternalReferenceToPermanentLocation;
- (void)_writeExternalReferenceToInterimLocation;
- (void)dealloc;

@end
