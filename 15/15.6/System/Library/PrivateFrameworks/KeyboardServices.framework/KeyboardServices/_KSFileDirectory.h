@class NSArray, NSMutableDictionary;

@interface _KSFileDirectory : _KSFileEntry <NSSecureCoding, NSFastEnumeration> {
    NSMutableDictionary *_contents;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, retain, nonatomic) NSArray *contents;

- (id)description;
- (void).cxx_destruct;
- (void)addEntry:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (void)consistencyCheck;
- (id)entryForName:(id)a0;
- (id)findEntryWithComparison:(id /* block */)a0 recursively:(char)a1;
- (id)initWithDirectory:(id)a0 captureContents:(char)a1 storeRoot:(char)a2;
- (void)performOnEverything:(id /* block */)a0;
- (void)removeEntryWithName:(id)a0;
- (void)restoreToPath:(id)a0;

@end
