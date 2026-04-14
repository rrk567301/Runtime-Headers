@class NSString, NSSet;

@interface _DPBlacklist : NSObject

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, nonatomic) NSSet *blacklist;
@property (readonly, nonatomic) long long version;

+ (BOOL)blacklistExistsWithKey:(id)a0 inDirectory:(id)a1;
+ (void)initialize;
+ (id)blacklistForKey:(id)a0 systemBlacklistDirectory:(id)a1 runtimeBlacklistDirectory:(id)a2;
+ (void)resetAllBlacklists;
+ (id)filePathWithKey:(id)a0 inDirectory:(id)a1;
+ (void)removeBlackListForKey:(id)a0;
+ (void)removeBlackListsForKeys:(id)a0;
+ (id)extractKeyFromFileName:(id)a0;
+ (id)blacklistForKey:(id)a0 fromConfigurationsFile:(id)a1;

- (id)initWithKey:(id)a0 fromConfigurationsFile:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
