@class NSDictionary, NSString;

@interface BLPurchaseResponseItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *item;
@property (copy, nonatomic) NSDictionary *metadata;
@property (copy, nonatomic) NSString *purchaseParameters;
@property (nonatomic) char isPurchaseRedownload;
@property (nonatomic) char isAudiobook;
@property (nonatomic) char isPDF;
@property (copy, nonatomic) NSString *downloadID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
