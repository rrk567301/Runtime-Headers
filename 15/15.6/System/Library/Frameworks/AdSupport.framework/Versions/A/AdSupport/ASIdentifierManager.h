@class NSUUID;

@interface ASIdentifierManager : NSObject

@property (readonly, nonatomic) NSUUID *advertisingIdentifier;
@property (readonly, nonatomic, getter=isAdvertisingTrackingEnabled) char advertisingTrackingEnabled;

+ (id)sharedManager;

- (void)clearAdvertisingIdentifier;
- (char)isUserOptedIn;

@end
