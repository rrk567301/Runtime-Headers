@class NSString, NSSet;

@interface _DPBlacklist : NSObject

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, nonatomic) NSSet *blacklist;
@property (readonly, nonatomic) long long version;

+ (void)removeBlackListForKey:(id)a0;
+ (id)blacklistForKey:(id)a0 systemBlacklistDirectory:(id)a1 runtimeBlacklistDirectory:(id)a2;
+ (id)filePathWithKey:(id)a0 inDirectory:(id)a1;
+ (void)initialize;
+ (id)extractKeyFromFileName:(id)a0;
+ (void)removeBlackListsForKeys:(id)a0;
+ (void)resetAllBlacklists;
+ (id)blacklistForKey:(id)a0 fromConfigurationsFile:(id)a1;
+ (BOOL)blacklistExistsWithKey:(id)a0 inDirectory:(id)a1;

- (id)initWithKey:(id)a0 fromConfigurationsFile:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
