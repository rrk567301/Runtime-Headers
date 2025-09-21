@class NSMutableSet;

@interface CalDAVChecksumVersionsItem : CoreDAVItem {
    NSMutableSet *_versionStringsSupported;
}

- (id)init;
- (id)copyParseRules;
- (void).cxx_destruct;
- (void)addVersionSupported:(id)a0;
- (BOOL)supportsVersion:(id)a0;

@end
