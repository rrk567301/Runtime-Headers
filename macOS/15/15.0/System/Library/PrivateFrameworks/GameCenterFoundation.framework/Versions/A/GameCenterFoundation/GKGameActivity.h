@class NSString, GKGameActivityInternal, NSDictionary, NSDate;

@interface GKGameActivity : NSObject

@property (readonly, copy, nonatomic) NSString *activityID;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSDate *createdAt;
@property (readonly) GKGameActivityInternal *internal;
@property (readonly, copy, nonatomic) NSString *activityType;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;

- (id)description;
- (void).cxx_destruct;
- (id)initWithInternalRepresentation:(id)a0;

@end
