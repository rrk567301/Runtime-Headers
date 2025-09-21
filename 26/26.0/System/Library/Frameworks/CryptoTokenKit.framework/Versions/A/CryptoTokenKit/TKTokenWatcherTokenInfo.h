@class NSString;

@interface TKTokenWatcherTokenInfo : NSObject

@property (readonly, nonatomic) NSString *tokenID;
@property (readonly, nonatomic) NSString *slotName;
@property (readonly, nonatomic) NSString *driverName;

- (void).cxx_destruct;
- (id)initWithTokenID:(id)a0 slotName:(id)a1 driverName:(id)a2;
- (id)initWithTokenInfo:(id)a0;

@end
