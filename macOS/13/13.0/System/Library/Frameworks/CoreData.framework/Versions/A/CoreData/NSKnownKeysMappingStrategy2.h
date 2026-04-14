@interface NSKnownKeysMappingStrategy2 : NSKnownKeysMappingStrategy1

- (id)retain;
- (oneway void)release;
- (void)dealloc;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (unsigned long long)retainCount;
- (id)init;
- (id)initForKeys:(id *)a0 count:(unsigned long long)a1;
- (id)initForKeys:(id)a0;
- (id)_setupForKeys:(id *)a0 count:(unsigned long long)a1 table:(void *)a2 inData:(id)a3;

@end
