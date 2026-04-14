@class NSData, NSString;

@interface HKUnprocessedBloodOxygenDataSample : HKSample <_HKBinarySample>

@property (readonly, copy, nonatomic) NSData *payload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (BOOL)_isConcreteObjectClass;
+ (id)unprocessedBloodOxygenDataSampleWithPayload:(id)a0 startDate:(id)a1 endDate:(id)a2 device:(id)a3 metadata:(id)a4;

@end
