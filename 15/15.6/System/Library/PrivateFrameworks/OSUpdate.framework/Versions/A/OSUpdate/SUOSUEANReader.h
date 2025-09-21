@interface SUOSUEANReader : NSObject

@property unsigned int service;
@property unsigned int connection;

- (void)dealloc;
- (id)init;
- (char)_connectToServiceIfNeededWithError:(id *)a0;
- (id)_errorWithDescription:(id)a0;
- (id)_errorWithDescription:(id)a0 underlyingError:(id)a1;
- (char)_getSizeForKey:(unsigned long long)a0 outSize:(unsigned long long *)a1 error:(id *)a2;
- (id)_readKey:(unsigned long long)a0 withSize:(unsigned long long)a1 error:(id *)a2;
- (char)checkExistenceOfKey:(unsigned long long)a0 outExists:(char *)a1 error:(id *)a2;
- (id)readDataForKey:(unsigned long long)a0 withError:(id *)a1;

@end
