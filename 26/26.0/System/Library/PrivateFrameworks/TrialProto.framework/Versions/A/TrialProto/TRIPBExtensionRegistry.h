@class NSMutableDictionary;

@interface TRIPBExtensionRegistry : NSObject <NSCopying> {
    NSMutableDictionary *mutableClassMap_;
}

- (void)dealloc;
- (void)addExtensions:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)extensionForDescriptor:(id)a0 fieldNumber:(long long)a1;
- (void)addExtension:(id)a0;

@end
