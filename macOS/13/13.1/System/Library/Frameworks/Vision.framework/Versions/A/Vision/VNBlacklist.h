@class NSSet;

@interface VNBlacklist : NSObject <NSCopying> {
    NSSet *_identifiers;
}

@property (readonly) unsigned long long identifierCount;
@property (readonly, copy) NSSet *allIdentifiers;

+ (id)blacklistFromUTF8StringArray:(const char **)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithIdentifiers:(id)a0;
- (BOOL)containsIdentifier:(id)a0;

@end
