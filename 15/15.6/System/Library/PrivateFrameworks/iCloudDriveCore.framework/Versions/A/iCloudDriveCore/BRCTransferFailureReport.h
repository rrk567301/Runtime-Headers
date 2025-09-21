@class NSError, NSMutableDictionary, NSDate;

@interface BRCTransferFailureReport : NSObject

@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSDate *lastFailureDate;
@property (readonly, nonatomic) NSMutableDictionary *privateDBErrorCountByPCSAndEDPState;
@property (readonly, nonatomic) NSMutableDictionary *shareDBErrorCountByPCSAndEDPState;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithError:(id)a0;
- (void)setLastFailureDate:(id)a0;
- (char)isEqualToTransferFailureReport:(id)a0;
- (void)encounteredErrorWithPCSState:(unsigned int)a0 enhancedDrivePrivacyEnabled:(char)a1 privateDB:(char)a2 atDate:(id)a3;
- (void)encounteredErrors:(unsigned long long)a0 atDate:(id)a1;

@end
