@class NSString;

@interface ASDCellularIdentity : NSObject

@property (class, readonly) ASDCellularIdentity *nullIdentity;

@property (readonly) NSString *defaultsKey;
@property (readonly, getter=isRoaming) BOOL roaming;
@property (readonly) NSString *simIdentity;

+ (id)identityForSubscription:(id)a0 usingClient:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)description;
- (id)copyWithRoaming:(BOOL)a0;

@end
