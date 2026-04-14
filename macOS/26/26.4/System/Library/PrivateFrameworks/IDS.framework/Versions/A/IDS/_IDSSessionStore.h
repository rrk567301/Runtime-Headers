@class NSMapTable;

@interface _IDSSessionStore : NSObject

@property (retain, nonatomic) NSMapTable *sessionBySessionID;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)sessionForAccount:(id)a0 fromID:(id)a1 identifier:(id)a2 transportType:(id)a3;

@end
