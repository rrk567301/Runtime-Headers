@class NSString, CCGazeData;

@interface CCCamera : CCTextureView <CCVisitable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } projectionMatrix;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } viewMatrix;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) CCGazeData *gaze;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void).cxx_destruct;

@end
