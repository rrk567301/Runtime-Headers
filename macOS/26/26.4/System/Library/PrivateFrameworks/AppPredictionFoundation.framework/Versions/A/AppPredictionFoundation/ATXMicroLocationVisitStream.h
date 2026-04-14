@class NSString;

@interface ATXMicroLocationVisitStream : NSObject <ATXGenericEventStreamBase>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)atxMicroLocationVisitEventFromBiomeEvent:(id)a0;
+ (id)convertNumDevicesVectorFromBMArray:(id)a0;
+ (id)convertProbabilityVectorFromBMArray:(id)a0;

@end
