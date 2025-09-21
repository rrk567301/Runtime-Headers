@class NSNumber, NSString;

@interface LBFMLRuntimedEvent : NSObject

@property (readonly, nonatomic) NSNumber *succeeded;
@property (readonly, nonatomic) NSString *errorDomain;
@property (readonly, nonatomic) NSNumber *errorCode;
@property (readonly, nonatomic) NSNumber *scheduled;
@property (readonly, nonatomic) long long eventType;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithScheduleStatus:(char)a0;
- (id)initWithTaskCompleted:(char)a0 error:(id)a1;
- (id)initWithTaskFetched:(char)a0 error:(id)a1;
- (id)initWithTaskScheduled:(char)a0 error:(id)a1;

@end
