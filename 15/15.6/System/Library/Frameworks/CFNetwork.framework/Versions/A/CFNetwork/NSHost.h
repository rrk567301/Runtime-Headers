@class NSString, NSArray;

@interface NSHost : NSObject {
    NSArray *names;
    NSArray *addresses;
    id reserved;
}

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSArray *names;
@property (readonly, copy) NSString *address;
@property (readonly, copy) NSArray *addresses;
@property (readonly, copy) NSString *localizedName;

+ (id)currentHost;
+ (id)hostWithName:(id)a0;
+ (void)flushHostCache;
+ (id)hostWithAddress:(id)a0;
+ (char)isHostCacheEnabled;
+ (void)setHostCacheEnabled:(char)a0;

- (void)dealloc;
- (id)description;
- (id)_thingToResolve;
- (char)isEqualToHost:(id)a0;

@end
