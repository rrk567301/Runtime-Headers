@interface GMSOptIn : NSObject

@property (nonatomic) BOOL isOptedIn;
@property (nonatomic, readonly) unsigned long long state;

+ (id)shared;

- (void).cxx_destruct;
- (id)init;

@end
