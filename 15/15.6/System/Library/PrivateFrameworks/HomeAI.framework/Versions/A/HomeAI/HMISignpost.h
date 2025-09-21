@class NSUUID, NSString, NSDate;

@interface HMISignpost : HMFObject <HMFLogging>

@property (readonly) NSDate *beginDate;
@property (readonly) unsigned long long signpostIdentifier;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)end;
- (void)begin;
- (id)signpostLog;
- (id)logIdentifier;
- (char)hasBegun;
- (id)initWithName:(id)a0 deferred:(char)a1;
- (char)shouldSignpost;

@end
