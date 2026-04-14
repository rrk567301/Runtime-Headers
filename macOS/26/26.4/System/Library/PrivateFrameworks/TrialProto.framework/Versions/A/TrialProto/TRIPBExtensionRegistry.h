@class NSMutableDictionary;

@interface TRIPBExtensionRegistry : NSObject <NSCopying> {
    NSMutableDictionary *mutableClassMap_;
}

- (id)extensionForDescriptor:(id)a0 fieldNumber:(long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addExtensions:(id)a0;
- (id)init;
- (void)addExtension:(id)a0;
- (void)dealloc;

@end
