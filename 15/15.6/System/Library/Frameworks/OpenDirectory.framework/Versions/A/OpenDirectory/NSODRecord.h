@interface NSODRecord : ODRecord

- (char)_isDeallocating;
- (oneway void)release;
- (char)_tryRetain;
- (char)allowsWeakReference;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (char)retainWeakReference;

@end
