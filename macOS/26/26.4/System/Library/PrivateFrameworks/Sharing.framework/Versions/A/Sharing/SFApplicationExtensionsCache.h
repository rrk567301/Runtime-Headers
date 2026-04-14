@interface SFApplicationExtensionsCache : NSObject {
    void /* unknown type, empty encoding */ cachedExtensionIdentitiesByIdentifier;
    void /* unknown type, empty encoding */ cachedSupersedingPluginsByIdentifier;
    void /* unknown type, empty encoding */ cachedResults;
    void /* unknown type, empty encoding */ keysBeingDiscovered;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ discoveryTask;
    void /* unknown type, empty encoding */ primed;
    void /* unknown type, empty encoding */ cacheMisses;
    void /* unknown type, empty encoding */ cacheHits;
}

+ (id)shared;

- (void).cxx_destruct;
- (id)init;
- (id)extensionsResultWithMatchingAttributes:(id)a0 testingReferenceDataDump:(id)a1;
- (void)primeExtensionsResultWithMatchingAttributes:(id)a0;
- (id)reportExtensionsCacheResult;

@end
