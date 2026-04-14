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
- (id)externalReferenceLocationString;
- (id)mutableCopy;
- (const void *)bytes;
- (void)getBytes:(void *)a0 length:(unsigned long long)a1;
- (BOOL)hasExternalReferenceContent;
- (int)preferredProtectionLevel;
- (const void *)_bytesPtrForStore;
- (id)databaseValue;
- (Class)classForCoder;
- (void)doCleanupOnDealloc;
- (void)_writeExternalReferenceToInterimLocation;
- (unsigned long long)_bytesLengthForExternalReference;
- (void)_setBytesForExternalReference:(const void *)a0;
- (unsigned long long)length;
- (id)description;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (const char *)_externalReferenceLocation;
- (void)_moveExternalReferenceToPermanentLocation;
- (BOOL)isEqualToData:(id)a0;
- (void)dealloc;
- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_deleteExternalReferenceFromPermanentLocation;
- (const void *)_bytesPtrForExternalReference;
- (unsigned long long)_bytesLengthForStore;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (const char *)_safeguardLocation;
- (BOOL)isEqual:(id)a0;
- (id)_safeguardLocationString;
- (id)initWithStoreBytes:(const void *)a0 length:(unsigned long long)a1 externalLocation:(id)a2 safeguardLocation:(id)a3 protectionLevel:(int)a4;
- (id)UUID;
- (id)initForExternalLocation:(id)a0 safeguardLocation:(id)a1 data:(id)a2 protectionLevel:(int)a3;
- (id)_originalData;

@end
