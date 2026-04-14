@class NSArray, NSString;

@interface LPiTunesMediaLookupTask : AMSLookup {
    NSArray *_identifiers;
    NSArray *_bundleIdentifiers;
    NSString *_storefrontCountryCode;
}

- (id)initWithBundleIdentifier:(id)a0;
- (id)sharedBag;
- (void).cxx_destruct;
- (id)_compileQueryParametersWithBundleIds:(id)a0 itemIds:(id)a1;
- (void)start:(id /* block */)a0;
- (id)init;
- (id)callerID;
- (id)initWithIdentifier:(id)a0 storefrontCountryCode:(id)a1;

@end
