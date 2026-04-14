@interface NSKnownKeysMappingStrategy2 : NSKnownKeysMappingStrategy1

- (id)initForKeys:(id)a0;
- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)initForKeys:(id *)a0 count:(unsigned long long)a1;
- (BOOL)_tryRetain;
- (void)dealloc;
- (BOOL)_isDeallocating;
- (id)_setupForKeys:(id *)a0 count:(unsigned long long)a1 table:(void *)a2 inData:(id)a3;
- (id)init;

@end
