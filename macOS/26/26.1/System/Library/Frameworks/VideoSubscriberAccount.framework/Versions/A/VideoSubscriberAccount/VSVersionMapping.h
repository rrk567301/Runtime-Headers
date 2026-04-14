@class NSString;

@interface VSVersionMapping : NSObject

@property (readonly, nonatomic) NSString *iOSSupportVersion;

+ (id)sharedInstance;
+ (id)systemVersion;

- (void).cxx_destruct;
- (id)init;

@end
