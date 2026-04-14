@class NSData;

@interface _PFEncodedArray : NSArray {
    NSData *_sourceData;
    int _cd_rc;
    unsigned int _count;
}

+ (Class)classForKeyedUnarchiver;

- (id)copy;
- (id)mutableCopy;
- (const id *)_values;
- (Class)classForCoder;
- (void)_replaceObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)description;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)init;

@end
