@class NSNumber;

@interface ICPrivacyInfoDetails : NSObject

@property (nonatomic) char acknowledgementNeeded;
@property (nonatomic) char previouslyAcknowledged;
@property (nonatomic) char rejected;
@property (copy, nonatomic) NSNumber *acceptedVersion;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
