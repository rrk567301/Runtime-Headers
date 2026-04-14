@class NSString;

@interface NSStoreMapping : NSObject {
    NSString *_externalName;
}

- (id)externalName;
- (void)copyValuesForReadOnlyFetch:(id)a0;
- (id)initWithExternalName:(id)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
