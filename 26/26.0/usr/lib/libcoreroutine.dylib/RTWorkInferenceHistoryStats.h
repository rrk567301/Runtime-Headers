@class NSUUID, NSDate;

@interface RTWorkInferenceHistoryStats : NSObject

@property (readonly, nonatomic) NSUUID *learnedPlaceIdentifier;
@property (readonly, nonatomic) unsigned long long totalInferences;
@property (readonly, nonatomic) unsigned long long workInferences;
@property (readonly, nonatomic) NSDate *lastDateInferred;

- (id)description;
- (void).cxx_destruct;
- (id)initWithLearnedPlaceIdentifier:(id)a0 totalInferences:(unsigned long long)a1 workInferences:(unsigned long long)a2 lastDateInferred:(id)a3;

@end
