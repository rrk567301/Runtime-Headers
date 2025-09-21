@class NSURL;

@interface VZEFIVariableStore : NSObject

@property (readonly, copy) NSURL *URL;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)initCreatingVariableStoreAtURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;

@end
