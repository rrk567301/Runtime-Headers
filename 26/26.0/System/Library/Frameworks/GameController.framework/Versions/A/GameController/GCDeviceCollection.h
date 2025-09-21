@class NSSet;

@interface GCDeviceCollection : NSObject <NSFastEnumeration> {
    NSSet *_underlyingCollection;
}

@property (readonly) unsigned long long count;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)init;
- (id)objectEnumerator;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
