@class NSString;

@interface MicroLocationDaemon.VisualMappingOdometry : NSObject {
    void /* unknown type, empty encoding */ timestamp;
    void /* unknown type, empty encoding */ deltaPosition;
    void /* unknown type, empty encoding */ attitudeQuaternion;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;

@end
