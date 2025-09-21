@class NSString;

@interface DRSSubmittedLogInfo : NSObject

@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSString *sandboxExtension;
@property (readonly, nonatomic) char transferOwnership;

+ (id)submittedLogInfosFromPaths:(id)a0 sandboxExtensions:(id)a1 transferOwnerships:(id)a2 successOut:(char *)a3;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithPath:(const char *)a0 sandboxExtension:(const char *)a1 transferOwnership:(char)a2;

@end
