@class NSMutableDictionary;

@interface TRIPBExtensionRegistry : NSObject <NSCopying> {
    NSMutableDictionary *mutableClassMap_;
}

- (id)init;
- (void)addExtensions:(id)a0;
- (void)addExtension:(id)a0;
- (void)dealloc;
- (id)extensionForDescriptor:(id)a0 fieldNumber:(long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
