@class NSData;

@interface _PFEncodedArray : NSArray {
    NSData *_sourceData;
    int _cd_rc;
    unsigned int _count;
}

+ (Class)classForKeyedUnarchiver;

- (id)mutableCopy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (void)_replaceObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)init;
- (unsigned long long)count;
- (const id *)_values;
- (id)description;
- (Class)classForCoder;
- (void)dealloc;

@end
