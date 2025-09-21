@class NSArray, NSMutableArray;

@interface ETSketchMessage : ETMessage {
    NSMutableArray *_strokes;
    NSMutableArray *_colorsInMessage;
}

@property (nonatomic) char hasMultipleColors;
@property (readonly, nonatomic) unsigned long long numberOfColors;
@property (nonatomic) char didEndWisping;
@property (nonatomic) char didDrawPoints;
@property (readonly, nonatomic) NSArray *strokes;
@property (readonly, nonatomic) NSArray *colorsInMessage;
@property (nonatomic) char hideComet;

+ (unsigned short)messageType;

- (id)init;
- (void).cxx_destruct;
- (id)archiveData;
- (id)initWithArchiveData:(id)a0;
- (void)addSketchPoint:(struct CGPoint { double x0; double x1; })a0;
- (double)messageDuration;
- (void)convertToSimulatedPlaybackSpeed;
- (char)_decodeWithDoodle:(id)a0;
- (void)addSketchPoint:(struct CGPoint { double x0; double x1; })a0 atTime:(double)a1;
- (void)addStrokeWithColor:(id)a0;
- (void)didEndWisp;
- (void)didReachRendererLimit;
- (id)messageTypeAsString;
- (void)setParentMessage:(id)a0;
- (void)willBeginWisp;

@end
