@class NSURL;

@interface PKSetupProductMethodAppClip : PKSetupProductMethod

@property (readonly, copy, nonatomic) NSURL *appClipLaunchURL;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCode:(id)a0;
- (void)_decorateDescription:(id)a0;
- (id)initWithDictionary:(id)a0 partnerIdentifier:(id)a1;

@end
