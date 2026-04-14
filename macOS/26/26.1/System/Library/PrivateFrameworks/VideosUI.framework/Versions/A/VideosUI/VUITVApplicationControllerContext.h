@class NSURL, NSDictionary;

@interface VUITVApplicationControllerContext : NSObject <NSCopying>

@property (copy, nonatomic) NSURL *javaScriptApplicationURL;
@property (copy, nonatomic) NSDictionary *launchOptions;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
