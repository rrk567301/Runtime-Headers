@class NSString;

@interface NSStoreMapping : NSObject {
    NSString *_externalName;
}

- (id)initWithExternalName:(id)a0;
- (void)copyValuesForReadOnlyFetch:(id)a0;
- (id)externalName;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;

@end
