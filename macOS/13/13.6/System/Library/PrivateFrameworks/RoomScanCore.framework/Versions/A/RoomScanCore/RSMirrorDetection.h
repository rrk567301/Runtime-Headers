@class NSMutableArray;

@interface RSMirrorDetection : NSObject {
    NSMutableArray *_mirrorPoints;
}

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)run:(id)a0;
- (id)mirrorPoints;

@end
