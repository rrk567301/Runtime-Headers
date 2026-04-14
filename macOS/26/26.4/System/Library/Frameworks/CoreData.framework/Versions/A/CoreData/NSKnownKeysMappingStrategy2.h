@interface NSKnownKeysMappingStrategy2 : NSKnownKeysMappingStrategy1

- (id)initForKeys:(id)a0;
- (BOOL)_tryRetain;
- (id)initForKeys:(id *)a0 count:(unsigned long long)a1;
- (BOOL)_isDeallocating;
- (id)retain;
- (id)init;
- (oneway void)release;
- (void)dealloc;
- (unsigned long long)retainCount;
- (id)_setupForKeys:(id *)a0 count:(unsigned long long)a1 table:(void *)a2 inData:(id)a3;

@end
