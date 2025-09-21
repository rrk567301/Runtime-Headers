@class SMPaths, OSInstallOptions;

@interface OSIReapableSpaceChecker : NSObject

@property (retain) OSInstallOptions *options;
@property (retain) SMPaths *pather;

+ (void)initialize;

- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (id)reapableFiles;
- (id)reapableSpace;
- (BOOL)willBlock;
- (void)_calculateSystemPathsAndSize;

@end
