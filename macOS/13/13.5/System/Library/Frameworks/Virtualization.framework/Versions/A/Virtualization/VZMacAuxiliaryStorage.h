@class NSURL;

@interface VZMacAuxiliaryStorage : NSObject

@property (readonly, copy) NSURL *URL;

- (void).cxx_destruct;
- (id)initWithContentsOfURL:(id)a0;
- (id)initWithURL:(id)a0;
- (id)_allNVRAMVariablesInPartition:(unsigned long long)a0 error:(id *)a1;
- (id)_allNVRAMVariablesWithError:(id *)a0;
- (BOOL)_removeNVRAMVariableNamed:(id)a0 error:(id *)a1;
- (BOOL)_setValue:(id)a0 forNVRAMVariableNamed:(id)a1 error:(id *)a2;
- (id)_valueForNVRAMVariableNamed:(id)a0 error:(id *)a1;
- (id)initCreatingStorageAtURL:(id)a0 hardwareModel:(id)a1 options:(unsigned long long)a2 error:(id *)a3;

@end
