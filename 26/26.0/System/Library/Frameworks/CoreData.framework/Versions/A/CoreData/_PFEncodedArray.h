@class NSData;

@interface _PFEncodedArray : NSArray {
    NSData *_sourceData;
    int _cd_rc;
    unsigned int _count;
}

+ (Class)classForKeyedUnarchiver;

- (id)mutableCopy;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)classForCoder;
- (unsigned long long)count;
- (void)_replaceObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)copy;
- (id)init;
- (id)description;
- (const id *)_values;
- (id)objectAtIndex:(unsigned long long)a0;

@end
