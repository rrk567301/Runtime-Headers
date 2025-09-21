@class GEOComposedGuidanceEvent;

@interface _MNJunctionViewPreloadEvent : NSObject

@property (retain, nonatomic) GEOComposedGuidanceEvent *junctionViewEvent;
@property (nonatomic) char needsPreload;

- (void).cxx_destruct;

@end
