@class NSData, PCXYZCoordinate;

@interface PCCandidateVisitData : NSObject

@property (copy, nonatomic) NSData *visitIdentifier;
@property (copy, nonatomic) NSData *loiIdentifier;
@property (retain, nonatomic) PCXYZCoordinate *coordinate;
@property (nonatomic) double entryTime;

- (void).cxx_destruct;
- (id)description;
- (id)initWithVisitIdentifier:(id)a0 loiIdentifier:(id)a1 coordinate:(id)a2 entryTime:(double)a3;

@end
