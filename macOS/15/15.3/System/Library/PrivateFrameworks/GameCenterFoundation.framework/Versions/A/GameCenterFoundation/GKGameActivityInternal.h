@class NSString, NSDictionary, NSDate;

@interface GKGameActivityInternal : GKInternalRepresentation

@property (readonly, copy, nonatomic) NSString *activityType;
@property (readonly, nonatomic) NSDictionary *userInfo;
@property (readonly, copy, nonatomic) NSString *activityID;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSDate *createdAt;

+ (id)secureCodedPropertyKeys;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithActivityType:(id)a0 bundleID:(id)a1 andUserInfo:(id)a2;
- (id)initWithActivityType:(id)a0 bundleID:(id)a1 createdAt:(id)a2 andUserInfo:(id)a3;

@end
