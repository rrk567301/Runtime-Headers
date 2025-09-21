@class NSArray;

@interface CNCustomDetectionTrack : CNDetectionTrack

@property (readonly) NSArray *allDetections;

- (char)_integrityCheck;
- (id)_internalCustomTrack;
- (id)initWithDetections:(id)a0 smooth:(char)a1;

@end
