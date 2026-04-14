@class GEOLocation;

@interface GEORoadCoursePenalty : NSObject <GEORoadMatcherPenalty> {
    GEOLocation *_location;
    BOOL _useRawLocations;
}

@property (nonatomic) BOOL useRawLocations;

- (void).cxx_destruct;
- (id)init;
- (id)initWithLocation:(id)a0;
- (double)penaltyForCandidate:(id)a0;

@end
