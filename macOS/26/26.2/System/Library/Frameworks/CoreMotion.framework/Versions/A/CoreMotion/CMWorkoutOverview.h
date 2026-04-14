@class NSUUID, NSArray;

@interface CMWorkoutOverview : NSObject <NSSecureCoding, NSCopying> {
    NSUUID *_overviewId;
    NSArray *_workouts;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *overviewId;
@property (readonly, nonatomic) NSArray *workouts;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)dealloc;
- (id)initWithOverviewId:(id)a0 workouts:(id)a1;

@end
