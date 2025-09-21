@class NSString, NSNumber;

@interface CloudFeatureObject : NSObject

@property (readonly, nonatomic) NSString *featureID;
@property (readonly, nonatomic) BOOL canUse;
@property (readonly, nonatomic) NSNumber *limit;
@property (readonly, nonatomic) NSString *accessToken;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSNumber *value;

- (id)initWithFeatureID:(id)a0 status:(long long)a1 canUse:(BOOL)a2 accessToken:(id)a3;
- (id)initWithFeatureID:(id)a0 status:(long long)a1 canUse:(BOOL)a2 limit:(id)a3 accessToken:(id)a4;
- (id)init;
- (id)description;
- (id)initWithFeatureID:(id)a0 status:(long long)a1 canUse:(BOOL)a2 intValue:(long long)a3 accessToken:(id)a4;
- (void).cxx_destruct;

@end
