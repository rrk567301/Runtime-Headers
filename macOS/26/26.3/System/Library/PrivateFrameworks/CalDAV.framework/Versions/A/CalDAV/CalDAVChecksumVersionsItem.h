@class NSMutableSet;

@interface CalDAVChecksumVersionsItem : CoreDAVItem {
    NSMutableSet *_versionStringsSupported;
}

- (id)init;
- (void).cxx_destruct;
- (id)copyParseRules;
- (void)addVersionSupported:(id)a0;
- (BOOL)supportsVersion:(id)a0;

@end
