@class NSKnownKeysDictionary;

@interface _PFTempNestedSnapshot : NSObject {
    NSKnownKeysDictionary *_snapshot;
    unsigned long long _version;
}

- (void)dealloc;
- (id)valueForKey:(id)a0;
- (unsigned int)_versionNumber;
- (const id *)knownKeyValuesPointer;
- (id)initWithOwnedKKsD:(id)a0 andVersion:(unsigned long long)a1;
- (id)_snapshot_;

@end
