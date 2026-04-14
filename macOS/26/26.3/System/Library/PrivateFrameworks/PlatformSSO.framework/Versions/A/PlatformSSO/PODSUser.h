@class NSString;

@interface PODSUser : NSObject

@property (retain) NSString *userName;
@property (retain) NSString *generatedUUID;
@property unsigned int uid;
@property unsigned int gid;
@property (retain) NSString *shell;
@property (retain) NSString *homeDirectory;

- (void).cxx_destruct;

@end
