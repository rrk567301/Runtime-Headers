@class NSString;
@protocol NTGroupingServiceType, FCFeedTransforming;

@interface NTBestOfSectionTransformation : NSObject <FCFeedTransforming>

@property (readonly, nonatomic) id<NTGroupingServiceType> groupingService;
@property (readonly, nonatomic) unsigned long long limit;
@property (readonly, nonatomic) id<FCFeedTransforming> fallbackTransformation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)transformFeedItems:(id)a0;
- (void).cxx_destruct;
- (id)initWithGroupingService:(id)a0 limit:(unsigned long long)a1 fallbackTransformation:(id)a2;

@end
