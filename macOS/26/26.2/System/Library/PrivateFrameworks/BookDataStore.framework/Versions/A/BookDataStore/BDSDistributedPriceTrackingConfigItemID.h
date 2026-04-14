@class NSString;

@interface BDSDistributedPriceTrackingConfigItemID : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *adamID;
@property (readonly, nonatomic) BOOL isAudiobook;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAdamID:(id)a0 isAudiobook:(BOOL)a1;

@end
