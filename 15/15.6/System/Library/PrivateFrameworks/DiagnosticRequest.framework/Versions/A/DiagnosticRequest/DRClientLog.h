@class NSString;

@interface DRClientLog : NSObject

@property (readonly, nonatomic) NSString *sandboxExtension;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) char transferOwnership;

+ (id)sandboxExtensionForLog:(id)a0 transferOwnership:(char)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0 transferOwnership:(char)a1 errorOut:(id *)a2;
- (id)_checkPath;

@end
