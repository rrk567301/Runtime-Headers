@class NSArray;

@interface SMNWindowsPathInfoAction : SMNAction

@property (retain) NSArray *paths;
@property char sizeDirectories;

+ (int)actionID;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPaths:(id)a0;
- (id)requestPayload;
- (char)expectsAResult;

@end
