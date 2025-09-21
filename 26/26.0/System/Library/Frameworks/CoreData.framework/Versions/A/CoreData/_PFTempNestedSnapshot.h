@class NSKnownKeysDictionary;

@interface _PFTempNestedSnapshot : NSObject {
    NSKnownKeysDictionary *_snapshot;
    unsigned long long _version;
}

- (void)dealloc;
- (unsigned int)_versionNumber;
- (id)valueForKey:(id)a0;
- (id)initWithOwnedKKsD:(id)a0 andVersion:(unsigned long long)a1;
- (const id *)knownKeyValuesPointer;
- (id)_snapshot_;

@end
