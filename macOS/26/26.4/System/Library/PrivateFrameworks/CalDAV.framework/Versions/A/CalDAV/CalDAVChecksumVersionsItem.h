@class NSMutableSet;

@interface CalDAVChecksumVersionsItem : CoreDAVItem {
    NSMutableSet *_versionStringsSupported;
}

- (id)copyParseRules;
- (void).cxx_destruct;
- (id)init;
- (void)addVersionSupported:(id)a0;
- (BOOL)supportsVersion:(id)a0;

@end
