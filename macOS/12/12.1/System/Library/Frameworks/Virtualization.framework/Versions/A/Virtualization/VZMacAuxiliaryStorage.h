@class NSURL;

@interface VZMacAuxiliaryStorage : NSObject

@property (readonly, copy) NSURL *URL;

- (id)initWithContentsOfURL:(id)a0;
- (void).cxx_destruct;
- (id)initCreatingStorageAtURL:(id)a0 hardwareModel:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (id)_allNVRAMVariablesWithError:(id *)a0;
- (id)_valueForNVRAMVariableNamed:(id)a0 error:(id *)a1;
- (BOOL)_removeNVRAMVariableNamed:(id)a0 error:(id *)a1;
- (BOOL)_setValue:(id)a0 forNVRAMVariableNamed:(id)a1 error:(id *)a2;

@end
