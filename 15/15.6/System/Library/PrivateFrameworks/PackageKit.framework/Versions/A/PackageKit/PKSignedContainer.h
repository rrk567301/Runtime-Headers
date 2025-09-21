@class NSString, PKArchive, NSDictionary;

@interface PKSignedContainer : NSObject {
    PKArchive *_archive;
    NSDictionary *_metadata;
}

@property char performsAssessmentIfNeeded;
@property char userConsentedOperation;
@property (retain) NSString *secureAppGroupContainerIdentifier;
@property unsigned long long options;
@property (readonly) unsigned long long fileSystemCompressionFormat;

- (void)dealloc;
- (void)cancelOperation:(id)a0;
- (char)_assessURL:(id)a0 withQuarantineFlags:(unsigned int)a1;
- (id)_archive;
- (char)_assessContainerReturningShouldFlagContents:(char *)a0;
- (id)_initCommon;
- (id)_secureAppGroupContainerWithIdentifier:(id)a0 outSandboxHandle:(long long *)a1;
- (char)_setAssessment:(char)a0 ofItemAtPath:(id)a1;
- (void)_startUnarchivingAtPath:(id)a0 cancelHandler:(id)a1 notifyOnQueue:(id)a2 progress:(id /* block */)a3 finish:(id /* block */)a4;
- (id)initForReadingFromContainerAtURL:(id)a0 error:(id *)a1;
- (id)startUnarchivingAtPath:(id)a0 notifyOnQueue:(id)a1 progress:(id /* block */)a2 finish:(id /* block */)a3;

@end
