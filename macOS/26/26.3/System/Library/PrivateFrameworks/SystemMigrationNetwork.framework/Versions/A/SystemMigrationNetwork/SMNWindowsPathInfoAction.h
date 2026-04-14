@class NSArray;

@interface SMNWindowsPathInfoAction : SMNAction

@property (retain) NSArray *paths;
@property BOOL sizeDirectories;

+ (int)actionID;

- (id)initWithPaths:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)requestPayload;
- (BOOL)expectsAResult;

@end
