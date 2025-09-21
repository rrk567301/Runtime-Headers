@interface TVRMSControlInterface : NSObject

@property (nonatomic) char supportsSpeakerSelection;
@property (nonatomic) char supportsVolumeControl;
@property (nonatomic) char supportsDirectionalControl;

- (id)protobuf;
- (id)initWithProtobuf:(id)a0;

@end
