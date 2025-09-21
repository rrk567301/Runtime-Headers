@class NSString, NSDictionary;

@interface IDSDeliveryControllerTimeMetric : NSObject <CUTRTCMetric>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned short rtcType;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) double timeToSend;
@property (readonly, nonatomic) long long endpointCount;
@property (readonly, nonatomic) char usedPipeline;
@property (readonly, nonatomic) char usedMMCS;
@property (readonly, nonatomic) long long responseCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStartDate:(id)a0 endDate:(id)a1 endpointCount:(long long)a2 usedPipeline:(char)a3 usedMMCS:(char)a4 responseCode:(long long)a5;

@end
