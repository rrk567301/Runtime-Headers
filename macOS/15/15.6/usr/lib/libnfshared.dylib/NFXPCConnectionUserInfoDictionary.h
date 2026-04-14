@class NFServiceWhitelistChecker, NSString, NSMutableDictionary;

@interface NFXPCConnectionUserInfoDictionary : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _dataLock;
    NSMutableDictionary *_data;
}

@property (readonly, nonatomic) NFServiceWhitelistChecker *serviceWhitelist;
@property (readonly, nonatomic) NSString *clientName;

- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (id)objectsForKeys:(id)a0 notFoundMarker:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)initWithServiceWhitelist:(id)a0 clientName:(id)a1;
- (void)modifyObjectForKey:(id)a0 handler:(id /* block */)a1;

@end
