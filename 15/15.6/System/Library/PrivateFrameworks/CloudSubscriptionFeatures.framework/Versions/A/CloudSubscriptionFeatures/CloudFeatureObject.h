@class NSString, NSNumber;

@interface CloudFeatureObject : NSObject

@property (readonly, nonatomic) NSString *featureID;
@property (readonly, nonatomic) char canUse;
@property (readonly, nonatomic) NSNumber *limit;
@property (readonly, nonatomic) NSString *accessToken;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSNumber *value;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithFeatureID:(id)a0 status:(long long)a1 canUse:(char)a2 accessToken:(id)a3;
- (id)initWithFeatureID:(id)a0 status:(long long)a1 canUse:(char)a2 intValue:(long long)a3 accessToken:(id)a4;
- (id)initWithFeatureID:(id)a0 status:(long long)a1 canUse:(char)a2 limit:(id)a3 accessToken:(id)a4;

@end
