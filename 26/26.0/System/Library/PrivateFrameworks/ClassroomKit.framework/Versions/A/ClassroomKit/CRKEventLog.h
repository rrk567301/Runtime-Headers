@class NSSet, NSDate;

@interface CRKEventLog : NSObject <NSSecureCoding> {
    NSSet *mLazilyLoadedEvents;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSSet *passedInEvents;
@property (copy, nonatomic) NSSet *passedInEventDatas;
@property (readonly, copy, nonatomic) NSSet *events;

- (void)encodeWithCoder:(id)a0;
- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 eventDatas:(id)a2;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 events:(id)a2;
- (BOOL)isEqualToTimeline:(id)a0;

@end
