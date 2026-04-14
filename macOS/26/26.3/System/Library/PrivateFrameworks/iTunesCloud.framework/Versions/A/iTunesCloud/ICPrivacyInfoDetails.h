@class NSNumber;

@interface ICPrivacyInfoDetails : NSObject

@property (nonatomic) BOOL acknowledgementNeeded;
@property (nonatomic) BOOL previouslyAcknowledged;
@property (nonatomic) BOOL rejected;
@property (copy, nonatomic) NSNumber *acceptedVersion;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
