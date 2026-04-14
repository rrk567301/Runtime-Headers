@class NSNumber;

@interface OBCapabilities : NSObject

@property (retain, nonatomic) NSNumber *overrideEligibleForChlorine;
@property (nonatomic) BOOL preventURLDataDetection;
@property (nonatomic) BOOL preventOpeningSafari;

+ (id)sharedCapabilities;

- (void).cxx_destruct;
- (BOOL)isWAPI;
- (BOOL)deviceSupportsGenerativeModels;
- (BOOL)eligibleForChlorine;

@end
