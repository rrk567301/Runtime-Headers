@class NSData, NSSet, NSArray;

@interface PCMergeResult : NSObject <NSCopying>

@property (retain, nonatomic) NSData *loiId;
@property (nonatomic) double confidence;
@property (nonatomic) double entryTime;
@property (nonatomic) double exitTime;
@property (nonatomic) double entryUnc;
@property (nonatomic) double exitUnc;
@property (retain, nonatomic) NSSet *sources;
@property (retain, nonatomic) NSArray *transports;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithLoiId:(id)a0 confidence:(double)a1 entryTime:(double)a2 exitTime:(double)a3 entryUnc:(double)a4 exitUnc:(double)a5 sources:(id)a6 transports:(id)a7;

@end
