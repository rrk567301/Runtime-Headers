@class NSString, NSSet;

@interface QUData : NSObject

@property (readonly, nonatomic) NSString *intentLabel;
@property (readonly, nonatomic) float intentScore;
@property (readonly, nonatomic) NSSet *intentBundleIds;

- (id)initWithQueryContext:(id)a0;
- (void).cxx_destruct;

@end
