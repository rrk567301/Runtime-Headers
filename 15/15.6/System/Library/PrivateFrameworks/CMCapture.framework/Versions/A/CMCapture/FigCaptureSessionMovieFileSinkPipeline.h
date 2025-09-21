@class NSMutableArray;

@interface FigCaptureSessionMovieFileSinkPipeline : FigCaptureMovieFileSinkPipeline

@property (nonatomic) char momentCaptureMovieRecordingEnabled;
@property (nonatomic) char recording;
@property (nonatomic) char recordedWhileMultitasking;
@property (retain, nonatomic) NSMutableArray *pendingIrisRecordings;
@property (nonatomic) char checkIfFileAlreadyExistForMFO;

- (void)dealloc;

@end
