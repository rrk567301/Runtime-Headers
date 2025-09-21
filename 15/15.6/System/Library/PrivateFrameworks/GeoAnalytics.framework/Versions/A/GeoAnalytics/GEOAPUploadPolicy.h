@class NSArray;

@interface GEOAPUploadPolicy : NSObject

@property (nonatomic) int type;
@property (nonatomic) char sendImmediately;
@property (nonatomic) double ttl;
@property (retain, nonatomic) NSArray *uploadStages;

- (void).cxx_destruct;

@end
