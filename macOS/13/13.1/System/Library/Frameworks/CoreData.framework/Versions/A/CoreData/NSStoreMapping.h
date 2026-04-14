@class NSString;

@interface NSStoreMapping : NSObject {
    NSString *_externalName;
}

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithExternalName:(id)a0;
- (id)externalName;
- (void)copyValuesForReadOnlyFetch:(id)a0;

@end
