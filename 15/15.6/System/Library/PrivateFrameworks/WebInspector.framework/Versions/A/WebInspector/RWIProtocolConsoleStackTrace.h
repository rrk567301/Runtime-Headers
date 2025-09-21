@class NSArray;

@interface RWIProtocolConsoleStackTrace : RWIProtocolJSONObject

@property (copy, nonatomic) NSArray *callFrames;
@property (nonatomic) char topCallFrameIsBoundary;
@property (nonatomic) char truncated;
@property (retain, nonatomic) RWIProtocolConsoleStackTrace *parentStackTrace;

- (id)initWithCallFrames:(id)a0;

@end
