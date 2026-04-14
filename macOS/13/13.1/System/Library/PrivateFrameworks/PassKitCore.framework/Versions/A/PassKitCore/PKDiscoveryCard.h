@class NSString, PKDiscoveryMedia, PKColor, PKDiscoveryCallToAction, PKDiscoveryItem;

@interface PKDiscoveryCard : NSObject <NSSecureCoding> {
    NSString *_itemIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *heading;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *headingKey;
@property (readonly, nonatomic) NSString *titleKey;
@property (readonly, nonatomic) NSString *inlineDescriptionKey;
@property (readonly, nonatomic) PKDiscoveryMedia *backgroundMedia;
@property (readonly, nonatomic) PKColor *backgroundColor;
@property (readonly, nonatomic) PKDiscoveryCallToAction *callToAction;
@property (readonly, nonatomic) long long foregroundContentMode;
@property (readonly, nonatomic) long long largeCardTemplateType;
@property (readonly, nonatomic) NSString *inlineDescription;
@property (weak, nonatomic) PKDiscoveryItem *item;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (void)localizeWithBundle:(id)a0;
- (void)localizeWithBundle:(id)a0 table:(id)a1;

@end
