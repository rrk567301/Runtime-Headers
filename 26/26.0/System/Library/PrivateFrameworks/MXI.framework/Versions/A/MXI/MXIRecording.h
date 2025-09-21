@class NSURL, NSMutableArray, MTLSharedEventListener;
@protocol MTLSharedEvent;

@interface MXIRecording : NSObject {
    NSURL *_directoryURL;
    NSURL *_jsonURL;
    NSMutableArray *_commands;
    unsigned int _texureIndex;
    id<MTLSharedEvent> _event;
    MTLSharedEventListener *_listener;
    unsigned int _nextValue;
}

- (void).cxx_destruct;
- (id)captureTexture:(id)a0;
- (void)captureCommand:(id)a0 withArgs:(id)a1;
- (id)captureTexture:(id)a0 commandBuffer:(id)a1;
- (id)initWithURL:(id)a0 device:(id)a1;

@end
