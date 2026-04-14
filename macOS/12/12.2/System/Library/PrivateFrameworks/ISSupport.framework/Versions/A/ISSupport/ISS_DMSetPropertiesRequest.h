@class NSDictionary, NSMutableSet, ISS_MMiDiskSession;

@interface ISS_DMSetPropertiesRequest : ISS_DMDAVPost {
    ISS_MMiDiskSession *_iDiskSession;
    NSDictionary *_propsByPath;
    NSMutableSet *_lockTokens;
}

- (void)dealloc;
- (id)initWithIDiskSession:(id)a0 andPropertiesForPaths:(id)a1;
- (id)_errorsFromResponse;
- (id)_generateRequestBody;
- (id)_lockHeaderWithTokens:(id)a0;

@end
