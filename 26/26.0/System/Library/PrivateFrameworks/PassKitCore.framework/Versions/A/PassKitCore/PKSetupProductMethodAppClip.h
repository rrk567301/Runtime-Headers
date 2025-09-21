@class NSURL;

@interface PKSetupProductMethodAppClip : PKSetupProductMethod

@property (readonly, copy, nonatomic) NSURL *appClipLaunchURL;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCode:(id)a0;
- (void)_decorateDescription:(id)a0;
- (id)initWithDictionary:(id)a0 partnerIdentifier:(id)a1;

@end
