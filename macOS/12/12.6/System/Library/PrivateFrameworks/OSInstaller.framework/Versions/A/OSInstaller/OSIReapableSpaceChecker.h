@class SMPaths, OSInstallOptions;

@interface OSIReapableSpaceChecker : NSObject

@property (retain) OSInstallOptions *options;
@property (retain) SMPaths *pather;

+ (void)initialize;

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (BOOL)willBlock;
- (id)reapableSpace;
- (id)reapableFiles;
- (void)_calculateSystemPathsAndSize;

@end
