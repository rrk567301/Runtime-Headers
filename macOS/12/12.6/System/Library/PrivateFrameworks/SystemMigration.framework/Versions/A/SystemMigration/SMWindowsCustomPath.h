@class NSString, NSURL;

@interface SMWindowsCustomPath : NSObject

@property (retain) NSString *windowsPath;
@property BOOL windowsPathRelativeToUserHome;
@property (retain) NSURL *macPath;
@property BOOL macPathRelativeToUserHome;
@property unsigned long long size;

- (id)description;
- (void).cxx_destruct;
- (id)windowsPathForUser:(id)a0;
- (BOOL)isPerUser;

@end
