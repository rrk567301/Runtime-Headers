@class NSString;

@interface IXLSApplicationRecordEnumerator : NSObject <IXApplicationRecordEnumeratorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)bundleURLsForModuleAtURL:(id)a0 error:(id *)a1;
- (BOOL)_enumerateApplicationRecordsOnModuleAtURL:(id)a0 enumeratorBlock:(id /* block */)a1 error:(id *)a2;
- (id)bundleIDsForModuleAtURL:(id)a0 error:(id *)a1;

@end
