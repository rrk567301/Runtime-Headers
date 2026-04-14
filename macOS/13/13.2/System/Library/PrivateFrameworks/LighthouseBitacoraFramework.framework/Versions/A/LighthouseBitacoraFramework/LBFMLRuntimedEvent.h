@class NSNumber, NSString;

@interface LBFMLRuntimedEvent : NSObject

@property (readonly, nonatomic) NSNumber *succeeded;
@property (readonly, nonatomic) NSString *errorDomain;
@property (readonly, nonatomic) NSNumber *errorCode;
@property (readonly, nonatomic) NSNumber *scheduled;
@property (readonly, nonatomic) long long eventType;

- (void).cxx_destruct;
- (id)initWithTaskFetched:(BOOL)a0 error:(id)a1;
- (id)initWithTaskCompleted:(BOOL)a0 error:(id)a1;
- (id)initWithScheduleStatus:(BOOL)a0;
- (id)initWithTaskScheduled:(BOOL)a0 error:(id)a1;

@end
