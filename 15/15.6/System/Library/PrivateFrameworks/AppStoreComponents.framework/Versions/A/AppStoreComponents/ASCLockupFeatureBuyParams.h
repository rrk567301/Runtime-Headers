@class NSString, ASCAppOffer;

@interface ASCLockupFeatureBuyParams : NSObject <ASCLockupFeature>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) ASCAppOffer *appOffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAppOffer:(id)a0;

@end
