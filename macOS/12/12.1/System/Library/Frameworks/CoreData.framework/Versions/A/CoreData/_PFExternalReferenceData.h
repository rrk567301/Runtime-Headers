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

- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (unsigned long long)length;
- (const void *)bytes;
- (id)mutableCopy;
- (Class)classForCoder;
- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)getBytes:(void *)a0 length:(unsigned long long)a1;
- (id)UUID;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isEqualToData:(id)a0;
- (BOOL)hasExternalReferenceContent;
- (const char *)_externalReferenceLocation;
- (id)_originalData;
- (const char *)_safeguardLocation;
- (int)preferredProtectionLevel;
- (unsigned long long)_bytesLengthForExternalReference;
- (void)doCleanupOnDealloc;
- (id)_safeguardLocationString;
- (id)externalReferenceLocationString;
- (id)databaseValue;
- (const void *)_bytesPtrForStore;
- (unsigned long long)_bytesLengthForStore;
- (id)initWithStoreBytes:(const void *)a0 length:(unsigned long long)a1 externalLocation:(id)a2 safeguardLocation:(id)a3 protectionLevel:(int)a4;
- (id)initWithStoreBytes:(const void *)a0 length:(unsigned long long)a1 externalLocation:(id)a2 safeguardLocation:(id)a3 protectionLevel:(int)a4 ubiquitousLocation:(id)a5;
- (BOOL)_createdByUbiquityImport;
- (id)initForExternalLocation:(id)a0 safeguardLocation:(id)a1 data:(id)a2 protectionLevel:(int)a3;
- (const void *)_bytesPtrForExternalReference;
- (id)initForUbiquityDictionary:(id)a0 store:(id)a1;
- (void)_setBytesForExternalReference:(const void *)a0;
- (void)_writeExternalReferenceToInterimLocation;
- (void)_moveExternalReferenceToPermanentLocation;
- (void)_deleteExternalReferenceFromPermanentLocation;

@end
