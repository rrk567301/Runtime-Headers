@class NSString, NSURL;

@interface SMWindowsCustomPath : NSObject

@property (retain) NSString *windowsPath;
@property BOOL windowsPathRelativeToUserHome;
@property (retain) NSURL *macPath;
@property BOOL macPathRelativeToUserHome;
@property unsigned long long size;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isPerUser;
- (id)windowsPathForUser:(id)a0;

@end
