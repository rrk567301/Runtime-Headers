@class NSMapTable, NSMutableDictionary;

@interface GDViewRemoteAccessRequesterGuardedData : NSObject

@property (retain, nonatomic) NSMapTable *strongWeakCache;
@property (retain, nonatomic) NSMutableDictionary *persistentTokens;

- (id)init;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;

@end
