@class GEOLocation;

@interface GEORoadCoursePenalty : NSObject <GEORoadMatcherPenalty> {
    GEOLocation *_location;
    BOOL _useRawLocations;
}

@property (nonatomic) BOOL useRawLocations;

- (id)init;
- (id)initWithLocation:(id)a0;
- (void).cxx_destruct;
- (double)penaltyForCandidate:(id)a0;

@end
