@class NSString;

@interface CoreIDV.IdentityIntentToStoreRawValueKeys : NSObject

@property (class, nonatomic, readonly) NSString *willNotStore;
@property (class, nonatomic, readonly) NSString *mayStore;

+ (id)mayStoreForDays:(long long)a0;

- (void).cxx_destruct;
- (id)init;

@end
