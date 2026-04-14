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

- (int)preferredProtectionLevel;
- (id)mutableCopy;
- (BOOL)isEqualToData:(id)a0;
- (const void *)bytes;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_deleteExternalReferenceFromPermanentLocation;
- (unsigned long long)_bytesLengthForExternalReference;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_writeExternalReferenceToInterimLocation;
- (const char *)_safeguardLocation;
- (id)_originalData;
- (id)_safeguardLocationString;
- (void)_setBytesForExternalReference:(const void *)a0;
- (id)initWithStoreBytes:(const void *)a0 length:(unsigned long long)a1 externalLocation:(id)a2 safeguardLocation:(id)a3 protectionLevel:(int)a4;
- (BOOL)isEqual:(id)a0;
- (const void *)_bytesPtrForStore;
- (id)initForExternalLocation:(id)a0 safeguardLocation:(id)a1 data:(id)a2 protectionLevel:(int)a3;
- (id)copy;
- (unsigned long long)length;
- (const void *)_bytesPtrForExternalReference;
- (void)doCleanupOnDealloc;
- (void)getBytes:(void *)a0 length:(unsigned long long)a1;
- (BOOL)hasExternalReferenceContent;
- (void)_moveExternalReferenceToPermanentLocation;
- (unsigned long long)_bytesLengthForStore;
- (const char *)_externalReferenceLocation;
- (id)externalReferenceLocationString;
- (id)description;
- (Class)classForCoder;
- (id)databaseValue;
- (void)dealloc;
- (id)UUID;

@end
