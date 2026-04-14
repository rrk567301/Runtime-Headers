@class GEOLocation;

@interface GEORoadCoursePenalty : NSObject <GEORoadMatcherPenalty> {
    GEOLocation *_location;
    BOOL _useRawLocations;
}

@property (nonatomic) BOOL useRawLocations;

- (id)initWithLocation:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (double)penaltyForCandidate:(id)a0;

@end
