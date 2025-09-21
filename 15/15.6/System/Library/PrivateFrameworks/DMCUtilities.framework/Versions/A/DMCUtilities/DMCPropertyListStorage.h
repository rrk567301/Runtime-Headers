@class NSOperationQueue, NSString;

@interface DMCPropertyListStorage : NSObject

@property (retain, nonatomic) NSOperationQueue *storageQueue;
@property (retain, nonatomic) NSString *filePath;

- (void).cxx_destruct;
- (id)initWithFilePath:(id)a0;
- (id)_accessor_removeFileAtPath:(id)a0;
- (void)_accessor_updateDictionaryAtReadPath:(id)a0 writePath:(id)a1 updateBlock:(id /* block */)a2;
- (id)_accessor_valueForKey:(id)a0 atPath:(id)a1;
- (void)_ensureDirectoryExistsForFilePath:(id)a0;
- (unsigned long long)_optionForFileModificationAtPath:(id)a0 isDeletion:(char)a1;
- (void)_performFileActionAtPath:(id)a0 asynchronously:(char)a1 hasRead:(char)a2 hasWrite:(char)a3 isDeletion:(char)a4 action:(id /* block */)a5;
- (void)_updateDictionaryAtPath:(id)a0 updateBlock:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (char)_updateDictionaryAtPath:(id)a0 updateBlock:(id /* block */)a1 error:(id *)a2;
- (void)clearAllKeyValueStorage:(id /* block */)a0;
- (char)clearAllKeyValueStorageWithError:(id *)a0;
- (void)clearKeys:(id)a0 completionHandler:(id /* block */)a1;
- (char)clearKeys:(id)a0 error:(id *)a1;
- (void)retrieveDictionaryWithCompletionHandler:(id /* block */)a0;
- (id)retrieveDictionaryWithError:(id *)a0;
- (void)retrieveValueForKey:(id)a0 completionHandler:(id /* block */)a1;
- (id)retrieveValueForKey:(id)a0 error:(id *)a1;
- (void)saveKeyValuePairs:(id)a0 completionHandler:(id /* block */)a1;
- (char)saveKeyValuePairs:(id)a0 error:(id *)a1;
- (void)saveValue:(id)a0 forKey:(id)a1 completionHandler:(id /* block */)a2;
- (char)saveValue:(id)a0 forKey:(id)a1 error:(id *)a2;

@end
