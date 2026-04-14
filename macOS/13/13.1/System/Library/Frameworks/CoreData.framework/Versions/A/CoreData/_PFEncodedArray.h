@class NSData;

@interface _PFEncodedArray : NSArray {
    NSData *_sourceData;
    int _cd_rc;
    unsigned int _count;
}

+ (Class)classForKeyedUnarchiver;

- (id)retain;
- (oneway void)release;
- (void)dealloc;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (unsigned long long)retainCount;
- (id)copy;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopy;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)a0;
- (Class)classForCoder;
- (const id *)_values;
- (void)_replaceObject:(id)a0 atIndex:(unsigned long long)a1;

@end
