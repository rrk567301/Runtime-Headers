@class NSKnownKeysDictionary;

@interface _PFTempNestedSnapshot : NSObject {
    NSKnownKeysDictionary *_snapshot;
    unsigned long long _version;
}

- (const id *)knownKeyValuesPointer;
- (id)valueForKey:(id)a0;
- (id)_snapshot_;
- (unsigned int)_versionNumber;
- (id)initWithOwnedKKsD:(id)a0 andVersion:(unsigned long long)a1;
- (void)dealloc;

@end
