@class EKDirectoryLocation;

@interface EKConferenceRoom : NSObject

@property (retain, nonatomic) EKDirectoryLocation *location;
@property (nonatomic) BOOL supportsAvailability;
@property (nonatomic) BOOL availabilityRequestInProgress;
@property (nonatomic) long long availability;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
