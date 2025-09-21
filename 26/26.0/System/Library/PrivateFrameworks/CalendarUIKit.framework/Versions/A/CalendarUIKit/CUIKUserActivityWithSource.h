@class NSString;

@interface CUIKUserActivityWithSource : CUIKUserActivity {
    long long _sourceType;
    NSString *_sourceHost;
    NSString *_sourceOwner;
}

- (id)initWithDictionary:(id)a0;
- (id)dictionary;
- (void).cxx_destruct;
- (BOOL)_isLocalSource;
- (BOOL)_requiresHostAndOwner;
- (BOOL)_supportsConsistentExternalIDAcrossDevices;
- (BOOL)_supportsConsistentExternalIDAcrossDevices:(long long)a0;
- (id)initWithSource:(id)a0 type:(unsigned long long)a1;
- (unsigned long long)isMatchForSource:(id)a0;

@end
