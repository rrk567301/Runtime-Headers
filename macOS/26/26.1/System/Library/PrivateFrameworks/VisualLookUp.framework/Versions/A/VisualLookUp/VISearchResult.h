@class NSArray, NSData;

@interface VISearchResult : NSObject <NSCopying>

@property (readonly, nonatomic) NSArray *regionOfInterestResults;
@property (readonly, nonatomic) NSData *userFeedbackPayload;

+ (id)empty;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithRegionOfInterestResults:(id)a0;
- (id)initWithRegionOfInterestResults:(id)a0 userFeedbackPayload:(id)a1;

@end
