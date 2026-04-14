@class NSNumber, NSString;

@interface VUIDropOnTabConfig : NSObject

@property (retain, nonatomic) NSNumber *daysWithoutOpeningThreshold;
@property (retain, nonatomic) NSNumber *daysWithoutPlaybackThreshold;
@property (retain, nonatomic) NSString *dropOnTabIdentifier;

- (void).cxx_destruct;
- (id)init;

@end
