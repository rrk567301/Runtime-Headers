@class NSKnownKeysDictionary;

@interface _PFTempNestedSnapshot : NSObject {
    NSKnownKeysDictionary *_snapshot;
    unsigned long long _version;
}

- (id)_snapshot_;
- (const id *)knownKeyValuesPointer;
- (id)valueForKey:(id)a0;
- (void)dealloc;
- (unsigned int)_versionNumber;
- (id)initWithOwnedKKsD:(id)a0 andVersion:(unsigned long long)a1;

@end
