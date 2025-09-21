@class NSString;

@interface PLPhotosKnowledgeGraphAvailabilityStatus : NSObject

@property (readonly, copy, nonatomic) NSString *statusDescription;
@property (readonly, nonatomic) long long availability;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
