@class NSString, NSArray, NSDate, NSNumber;

@interface ATXMicroLocationVisitEvent : NSObject <ATXGenericEventBase>

@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSString *maxProbabilityMicroLocationIdentifier;
@property (readonly, nonatomic) NSNumber *maxProbability;
@property (readonly, nonatomic) NSArray *probabilityVector;
@property (readonly, nonatomic) BOOL isStable;
@property (readonly, nonatomic) NSArray *numDevicesVector;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithDomain:(id)a0 maxProbabilityMicroLocationIdentifier:(id)a1 maxProbability:(id)a2 probabilityVector:(id)a3 isStable:(BOOL)a4 numDevicesVector:(id)a5 timestamp:(id)a6;
- (BOOL)isEqualToATXMicroLocationVisitEvent:(id)a0;

@end
