@class NSError, NSMutableDictionary, NSDate;

@interface BRCTransferFailureReport : NSObject

@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSDate *lastFailureDate;
@property (readonly, nonatomic) NSMutableDictionary *privateDBErrorCountByPCSState;
@property (readonly, nonatomic) NSMutableDictionary *shareDBErrorCountByPCSState;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithError:(id)a0;
- (BOOL)isEqualToTransferFailureReport:(id)a0;
- (void)encounteredErrorWithPCSState:(unsigned int)a0 privateDB:(BOOL)a1 atDate:(id)a2;
- (void)encounteredErrors:(unsigned long long)a0 atDate:(id)a1;
- (void)setLastFailureDate:(id)a0;

@end
