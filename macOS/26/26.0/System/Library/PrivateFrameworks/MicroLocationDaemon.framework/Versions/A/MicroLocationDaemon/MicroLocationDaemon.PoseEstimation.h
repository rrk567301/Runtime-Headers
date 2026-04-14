@class NSString;

@interface MicroLocationDaemon.PoseEstimation : NSObject {
    void /* unknown type, empty encoding */ queryFrame;
    void /* unknown type, empty encoding */ relativePoses;
}

@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;

@end
