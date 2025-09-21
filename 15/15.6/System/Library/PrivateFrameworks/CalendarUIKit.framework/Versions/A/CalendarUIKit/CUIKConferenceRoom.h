@class EKDirectoryLocation;

@interface CUIKConferenceRoom : NSObject

@property (retain, nonatomic) EKDirectoryLocation *location;
@property (nonatomic) char supportsAvailability;
@property (nonatomic) char availabilityRequestInProgress;
@property (nonatomic) long long availability;

- (id)init;
- (void).cxx_destruct;

@end
