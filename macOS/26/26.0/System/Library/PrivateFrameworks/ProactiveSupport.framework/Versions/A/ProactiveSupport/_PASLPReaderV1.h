@class NSString, NSData;

@interface _PASLPReaderV1 : NSObject <_PASLPReaderProtocol> {
    NSData *_backingData;
    struct { void *mmapBase; unsigned long long mmapSize; } _mappedRegion;
    struct __CFAllocator { } *_releaseReaderDeallocator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (id)objectAtIndex:(unsigned long long)a0 usingDictionaryContext:(id)a1;
- (id)keyAtIndex:(unsigned long long)a0 usingDictionaryContext:(id)a1;
- (id)initWithData:(id)a0 sourcedFromPath:(id)a1 needsValidation:(BOOL)a2 error:(id *)a3;
- (id)objectAtIndex:(unsigned long long)a0 usingArrayContext:(id)a1;
- (id)objectForKey:(id)a0 usingDictionaryContext:(id)a1;
- (id)rootObjectWithErrMsg:(id *)a0;
- (void).cxx_destruct;

@end
