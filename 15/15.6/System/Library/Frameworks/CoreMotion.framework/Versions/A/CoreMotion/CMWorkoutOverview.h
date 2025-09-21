@class NSUUID, NSArray;

@interface CMWorkoutOverview : NSObject <NSSecureCoding, NSCopying> {
    NSUUID *_overviewId;
    NSArray *_workouts;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *overviewId;
@property (readonly, nonatomic) NSArray *workouts;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOverviewId:(id)a0 workouts:(id)a1;

@end
