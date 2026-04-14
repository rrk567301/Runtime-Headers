@class NSMutableArray;

@interface OKDocumentMovieExporterAudioTrack : NSObject

@property (retain, nonatomic) NSMutableArray *audioItems;
@property (retain, nonatomic) NSMutableArray *volumeMarkers;
@property (nonatomic) double volume;

- (id)init;
- (void)dealloc;

@end
