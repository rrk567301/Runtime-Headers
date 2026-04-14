@class NSArray;

@interface AVAudioHardwareConfigurationChangeEvent : NSObject

@property (retain, nonatomic) NSArray *createdObjects;
@property (retain, nonatomic) NSArray *destroyedObjects;
@property (retain, nonatomic) NSArray *changedObjects;

- (void).cxx_destruct;
- (id)init;

@end
