@interface TSPDocumentLoadValidationPolicy : NSObject

@property (readonly, nonatomic) long long timing;
@property (readonly, nonatomic) char validateModel;
@property (readonly, nonatomic) char validateDataCRC;
@property (readonly, nonatomic) char validateDataDigest;
@property (readonly, nonatomic) char scanForOSLikeCorruption;

+ (id)loadValidationPolicyWithTiming:(long long)a0 validateModel:(char)a1 validateDataCRC:(char)a2 validateDataDigest:(char)a3 scanForOSLikeCorruption:(char)a4;

- (id)description;
- (id)initWithTiming:(long long)a0 validateModel:(char)a1 validateDataCRC:(char)a2 validateDataDigest:(char)a3 scanForOSLikeCorruption:(char)a4;

@end
