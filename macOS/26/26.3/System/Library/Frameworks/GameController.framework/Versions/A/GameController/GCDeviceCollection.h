@class NSSet;

@interface GCDeviceCollection : NSObject <NSFastEnumeration> {
    NSSet *_underlyingCollection;
}

@property (readonly) unsigned long long count;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)objectEnumerator;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;

@end
