@interface NSKnownKeysMappingStrategy2 : NSKnownKeysMappingStrategy1

- (unsigned long long)retainCount;
- (id)retain;
- (id)init;
- (id)_setupForKeys:(id *)a0 count:(unsigned long long)a1 table:(void *)a2 inData:(id)a3;
- (BOOL)_tryRetain;
- (id)initForKeys:(id)a0;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (id)initForKeys:(id *)a0 count:(unsigned long long)a1;
- (oneway void)release;

@end
