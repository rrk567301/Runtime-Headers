@class NSArray;

@interface SMNWindowsPathInfoAction : SMNAction

@property (retain) NSArray *paths;
@property BOOL sizeDirectories;

+ (int)actionID;

- (id)initWithPaths:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)requestPayload;
- (BOOL)expectsAResult;

@end
