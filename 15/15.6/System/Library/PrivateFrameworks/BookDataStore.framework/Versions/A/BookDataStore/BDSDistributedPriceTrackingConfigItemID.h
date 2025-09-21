@class NSString;

@interface BDSDistributedPriceTrackingConfigItemID : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *adamID;
@property (readonly, nonatomic) char isAudiobook;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAdamID:(id)a0 isAudiobook:(char)a1;

@end
