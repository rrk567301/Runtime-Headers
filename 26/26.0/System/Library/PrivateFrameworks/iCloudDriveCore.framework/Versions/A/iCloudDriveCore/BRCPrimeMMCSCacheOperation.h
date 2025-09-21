@class NSString, FPSandboxingURLWrapper, NSData, CKRecord;

@interface BRCPrimeMMCSCacheOperation : _BRCOperation <BRCOperationSubclass> {
    CKRecord *_record;
    FPSandboxingURLWrapper *_existingContents;
    NSData *_boundaryKey;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
