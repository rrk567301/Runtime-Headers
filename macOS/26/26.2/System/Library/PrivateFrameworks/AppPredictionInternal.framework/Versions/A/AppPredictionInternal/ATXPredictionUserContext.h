@class NSString, NSDate;

@interface ATXPredictionUserContext : ATXPredictionContextDomain {
    double _absoluteLastUnlockDate;
    double _absoluteLastAppLaunchDate;
}

@property (readonly, nonatomic) NSDate *lastUnlockDate;
@property (readonly, nonatomic) NSString *lastAppLaunch;
@property (readonly, nonatomic) NSDate *lastAppLaunchDate;
@property (readonly, nonatomic) NSString *secondMostRecentAppLaunch;
@property (readonly, nonatomic) NSString *lastAppActionLaunch;

- (BOOL)isEqualToATXPredictionUserContext:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)jsonDict;
- (id)initWithProtoData:(id)a0;
- (id)proto;
- (void).cxx_destruct;
- (id)initWithProto:(id)a0;
- (id)description;
- (id)encodeAsProto;
- (id)initWithLastUnlockDate:(id)a0 lastAppLaunch:(id)a1 lastAppLaunchDate:(id)a2 secondMostRecentAppLaunch:(id)a3 lastAppActionLaunch:(id)a4;

@end
