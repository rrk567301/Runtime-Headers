@interface __IOGCFastPathClient : NSObject {
    struct __CFAllocator { } *allocator;
    unsigned int service;
    struct IOCFPlugInInterfaceStruct **pluginInterface;
    struct IOGCFastPathClientInterface **clientInterface;
    unsigned long long providerID;
}

- (id)description;
- (void)dealloc;

@end
