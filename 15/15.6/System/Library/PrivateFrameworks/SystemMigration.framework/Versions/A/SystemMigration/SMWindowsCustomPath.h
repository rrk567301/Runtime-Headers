@class NSString, NSURL;

@interface SMWindowsCustomPath : NSObject

@property (retain) NSString *windowsPath;
@property char windowsPathRelativeToUserHome;
@property (retain) NSURL *macPath;
@property char macPathRelativeToUserHome;
@property unsigned long long size;

- (id)description;
- (void).cxx_destruct;
- (char)isPerUser;
- (id)windowsPathForUser:(id)a0;

@end
