@interface NSKnownKeysMappingStrategy2 : NSKnownKeysMappingStrategy1

- (BOOL)_isDeallocating;
- (void)dealloc;
- (id)initForKeys:(id)a0;
- (BOOL)_tryRetain;
- (id)initForKeys:(id *)a0 count:(unsigned long long)a1;
- (id)retain;
- (id)init;
- (unsigned long long)retainCount;
- (id)_setupForKeys:(id *)a0 count:(unsigned long long)a1 table:(void *)a2 inData:(id)a3;
- (oneway void)release;

@end
