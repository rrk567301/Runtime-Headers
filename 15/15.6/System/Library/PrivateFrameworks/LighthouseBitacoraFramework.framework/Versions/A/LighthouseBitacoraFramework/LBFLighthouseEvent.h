@class NSNumber, NSString;

@interface LBFLighthouseEvent : NSObject

@property (readonly, nonatomic) NSNumber *succeeded;
@property (readonly, nonatomic) NSString *errorDomain;
@property (readonly, nonatomic) NSNumber *errorCode;
@property (readonly, nonatomic) NSNumber *usePrivateUpload;
@property (readonly, nonatomic) long long eventType;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPerformTrialTaskStatus:(char)a0 error:(id)a1 usePrivateUpload:(char)a2;
- (id)initWithPerformTaskStatus:(char)a0 error:(id)a1;
- (id)initWithPerformTrialTaskStatus:(char)a0 error:(id)a1;
- (id)initWithStop:(char)a0 error:(id)a1;

@end
