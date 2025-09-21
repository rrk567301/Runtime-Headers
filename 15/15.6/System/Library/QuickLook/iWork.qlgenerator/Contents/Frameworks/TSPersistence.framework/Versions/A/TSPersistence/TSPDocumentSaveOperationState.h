@class NSData, NSString, NSURL, NSUUID, NSIndexSet, SFUCryptoKey, TSPDocumentProperties, NSProgress, TSPDocumentRevision, TSPObject, TSPPackageWriter;

@interface TSPDocumentSaveOperationState : TSPSaveOperationState

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) long long packageType;
@property (copy, nonatomic) NSURL *relativeURLForExternalData;
@property (retain, nonatomic) NSProgress *progress;
@property (retain, nonatomic) TSPDocumentProperties *documentProperties;
@property (retain, nonatomic) TSPDocumentProperties *documentSupportProperties;
@property (retain, nonatomic) TSPDocumentRevision *documentRevision;
@property (nonatomic) char didResetDocumentRevision;
@property (nonatomic) unsigned long long saveToken;
@property (retain, nonatomic) TSPObject *documentObject;
@property (retain, nonatomic) TSPObject *supportObject;
@property (copy, nonatomic) NSURL *originalDocumentURL;
@property (copy, nonatomic) NSURL *originalSupportURL;
@property (retain, nonatomic) SFUCryptoKey *encryptionKey;
@property (retain, nonatomic) NSData *passwordVerifier;
@property (copy, nonatomic) NSString *documentPasswordHint;
@property (retain, nonatomic) TSPPackageWriter *documentPackageWriter;
@property (retain, nonatomic) TSPPackageWriter *supportPackageWriter;
@property (copy, nonatomic) NSUUID *documentUUID;
@property (retain, nonatomic) NSIndexSet *allDataIdentifiersPostSave;
@property (nonatomic) char shouldResumeAsynchronousModifications;
@property (nonatomic) char didEndWriteOperation;
@property (nonatomic) char shouldLeavePendingEndSave;

- (id)init;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 updateType:(long long)a1 packageType:(long long)a2;

@end
