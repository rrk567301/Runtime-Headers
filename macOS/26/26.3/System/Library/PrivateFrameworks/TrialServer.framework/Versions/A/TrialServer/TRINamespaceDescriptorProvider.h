@class NSString, TRINamespaceDatabase;

@interface TRINamespaceDescriptorProvider : NSObject <TRINamespaceDescriptorProviding> {
    TRINamespaceDatabase *_namespaceDatabase;
    NSString *_descriptorDirectory;
}

+ (id)providerWithNamespaceDatabase:(id)a0 defaultDescriptorDirectoryPath:(id)a1;
+ (id)_descriptorFromDynamicNamespaceRecord:(id)a0;

- (id)descriptorWithNamespaceName:(id)a0;
- (id)_dynamicDescriptorsForContainer:(int)a0 teamId:(id)a1;
- (id)initWithNamespaceDatabase:(id)a0 defaultDescriptorDirectoryPath:(id)a1;
- (void).cxx_destruct;
- (void)enumerateDefaultDescriptorsWithBlock:(id /* block */)a0;

@end
