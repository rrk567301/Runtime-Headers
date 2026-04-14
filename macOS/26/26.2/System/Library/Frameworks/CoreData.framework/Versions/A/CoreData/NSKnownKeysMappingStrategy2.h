@interface NSKnownKeysMappingStrategy2 : NSKnownKeysMappingStrategy1

- (id)retain;
- (BOOL)_isDeallocating;
- (id)initForKeys:(id *)a0 count:(unsigned long long)a1;
- (BOOL)_tryRetain;
- (id)initForKeys:(id)a0;
- (unsigned long long)retainCount;
- (id)_setupForKeys:(id *)a0 count:(unsigned long long)a1 table:(void *)a2 inData:(id)a3;
- (oneway void)release;
- (id)init;
- (void)dealloc;

@end
