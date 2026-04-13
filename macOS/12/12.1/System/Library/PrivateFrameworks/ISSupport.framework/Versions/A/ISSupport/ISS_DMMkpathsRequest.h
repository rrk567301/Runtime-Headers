@class NSArray, NSMutableSet, ISS_MMiDiskSession;

@interface ISS_DMMkpathsRequest : ISS_DMDAVPost {
    ISS_MMiDiskSession *_iDiskSession;
    NSArray *_paths;
    NSMutableSet *_lockTokens;
}

- (void)dealloc;
- (id)_errorsFromResponse;
- (id)initWithIDiskSession:(id)a0 andPaths:(id)a1;
- (id)_generateRequestBody;
- (id)_lockHeaderWithTokens:(id)a0;

@end
