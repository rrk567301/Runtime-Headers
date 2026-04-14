@class NSArray, NSString, TKCTKDConnection;

@interface TKClientToken : NSObject

@property (class, readonly, nonatomic) NSArray *builtinTokenIDs;

@property (readonly, nonatomic) TKCTKDConnection *ctkdConnection;
@property (readonly, nonatomic) NSString *tokenID;
@property (nonatomic) BOOL canRequireCardInsertion;

- (void)notifyOperation:(long long)a0 forToken:(id)a1 withStatus:(long long)a2;
- (id)initWithTokenID:(id)a0 ctkdConnection:(id)a1;
- (id)sessionWithLAContext:(id)a0 error:(id *)a1;
- (id)initWithTokenID:(id)a0;
- (id)_initWithTokenID:(id)a0;
- (void).cxx_destruct;
- (id)initWithTokenID:(id)a0 serverEndpoint:(id)a1 targetUID:(id)a2;

@end
