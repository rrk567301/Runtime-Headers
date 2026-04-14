@class NSData;

@interface _PFEncodedArray : NSArray {
    NSData *_sourceData;
    int _cd_rc;
    unsigned int _count;
}

+ (Class)classForKeyedUnarchiver;

- (const id *)_values;
- (unsigned long long)count;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)_replaceObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)copy;
- (id)description;
- (id)mutableCopy;
- (id)init;
- (void)dealloc;

@end
