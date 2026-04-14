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

+ (id)hostWithName:(id)a0;
+ (id)currentHost;
+ (id)hostWithAddress:(id)a0;
+ (BOOL)isHostCacheEnabled;
+ (void)setHostCacheEnabled:(BOOL)a0;
+ (void)flushHostCache;

- (void)dealloc;
- (id)description;
- (id)_thingToResolve;
- (BOOL)isEqualToHost:(id)a0;

@end
