@class NSNumber;

@interface ICPrivacyInfoDetails : NSObject

@property (nonatomic) BOOL acknowledgementNeeded;
@property (nonatomic) BOOL previouslyAcknowledged;
@property (nonatomic) BOOL rejected;
@property (copy, nonatomic) NSNumber *acceptedVersion;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
