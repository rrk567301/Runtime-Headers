@class NSData, NSString;

@interface _PFExternalReferenceData : NSData <NSCopying, NSMutableCopying> {
    NSData *_originalData;
    void *_bytesPtrForStore;
    unsigned long long _bytesLengthForStore;
    void *_bytesPtrForExternalReference;
    unsigned long long _bytesLengthForExternalReference;
    NSString *_externalReferenceLocation;
    NSString *_safeguardLocation;
    id _ubiquitousLocation;
    struct __externalDataFlags { unsigned char _isStoredExternally : 1; unsigned char _hasMappedData : 1; unsigned char _cleanupOnDealloc : 1; unsigned char _dataProtectionLevel : 3; unsigned char _isStoredUbiquitously : 1; unsigned char _createdByUbiquityImport : 1; unsigned int _reserved : 24; } _externalDataFlags;
}

+ (Class)classForKeyedUnarchiver;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)copy;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopy;
- (unsigned long long)length;
- (const void *)bytes;
- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (Class)classForCoder;
- (void)getBytes:(void *)a0 length:(unsigned long long)a1;
- (id)UUID;
- (BOOL)isEqualToData:(id)a0;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (const void *)_bytesPtrForStore;
- (unsigned long long)_bytesLengthForStore;
- (id)initForUbiquityDictionary:(id)a0 store:(id)a1;
- (id)initForExternalLocation:(id)a0 safeguardLocation:(id)a1 data:(id)a2 protectionLevel:(int)a3;
- (id)initWithStoreBytes:(const void *)a0 length:(unsigned long long)a1 externalLocation:(id)a2 safeguardLocation:(id)a3 protectionLevel:(int)a4;
- (id)initWithStoreBytes:(const void *)a0 length:(unsigned long long)a1 externalLocation:(id)a2 safeguardLocation:(id)a3 protectionLevel:(int)a4 ubiquitousLocation:(id)a5;
- (id)_originalData;
- (void)_setBytesForExternalReference:(const void *)a0;
- (void)_writeExternalReferenceToInterimLocation;
- (void)_moveExternalReferenceToPermanentLocation;
- (void)_deleteExternalReferenceFromPermanentLocation;
- (BOOL)hasExternalReferenceContent;
- (const void *)_bytesPtrForExternalReference;
- (unsigned long long)_bytesLengthForExternalReference;
- (const char *)_externalReferenceLocation;
- (const char *)_safeguardLocation;
- (id)_safeguardLocationString;
- (int)preferredProtectionLevel;
- (id)externalReferenceLocationString;
- (id)databaseValue;
- (void)doCleanupOnDealloc;
- (BOOL)_createdByUbiquityImport;

@end
