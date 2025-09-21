@interface IEUpdater : NSObject

- (id)getHighestVersionWithinRelease:(id)a0;
- (id)getFileVersion:(id)a0;
- (char)updateToLatest:(id)a0;
- (char)isUpdateAvailable:(id)a0;

@end
