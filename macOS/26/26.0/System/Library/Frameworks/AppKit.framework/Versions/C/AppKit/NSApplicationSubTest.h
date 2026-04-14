@class NSString, NSMutableDictionary, NSNumber, NSMutableArray;

@interface NSApplicationSubTest : NSObject {
    NSNumber *_startTime;
    NSNumber *_startFrame;
    NSMutableArray *_time;
    NSMutableArray *_fps;
    NSString *_testName;
    BOOL _showTime;
    BOOL _showFps;
    NSMutableDictionary *_data;
}

@property (readonly) NSNumber *startTime;

- (id)initWithName:(id)a0 metrics:(id)a1;
- (void)startWithFrameCount:(id)a0;
- (id)outputData;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)stopWithFrameCount:(id)a0;
- (id)getObjectForKey:(id)a0;
- (void).cxx_destruct;

@end
