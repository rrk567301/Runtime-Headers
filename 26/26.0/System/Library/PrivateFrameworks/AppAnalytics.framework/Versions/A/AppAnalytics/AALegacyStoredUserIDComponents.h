@class NSUUID, NSDate;

@interface AALegacyStoredUserIDComponents : NSObject {
    void /* unknown type, empty encoding */ legacyStoredUserIDComponents;
}

@property (nonatomic, readonly) NSUUID *userID;
@property (nonatomic, readonly) long long rotationPeriod;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *lastRotationDate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithID:(id)a0 rotationPeriod:(long long)a1 startDate:(id)a2 lastRotation:(id)a3;

@end
