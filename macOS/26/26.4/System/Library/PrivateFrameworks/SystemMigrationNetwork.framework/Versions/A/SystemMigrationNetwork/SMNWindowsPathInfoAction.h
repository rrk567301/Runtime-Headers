@class NSArray;

@interface SMNWindowsPathInfoAction : SMNAction

@property (retain) NSArray *paths;
@property BOOL sizeDirectories;

+ (int)actionID;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPaths:(id)a0;
- (id)requestPayload;
- (BOOL)expectsAResult;

@end
