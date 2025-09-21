@class NSString, PKDiscoveryMedia, PKColor, PKDiscoveryCallToAction, PKDiscoveryItem, NSDictionary;

@interface PKDiscoveryCard : NSObject <NSSecureCoding> {
    NSString *_itemIdentifier;
    NSDictionary *_backgroundMediaByKey;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *heading;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *headingKey;
@property (readonly, nonatomic) NSString *titleKey;
@property (readonly, nonatomic) NSString *inlineDescriptionKey;
@property (readonly, nonatomic) PKDiscoveryMedia *backgroundMedia;
@property (readonly, nonatomic) PKDiscoveryMedia *backgroundMediaExpanded;
@property (readonly, nonatomic) PKDiscoveryMedia *backgroundMediaCropped;
@property (readonly, nonatomic) PKColor *backgroundColor;
@property (readonly, nonatomic) PKDiscoveryCallToAction *callToAction;
@property (readonly, nonatomic) long long foregroundContentMode;
@property (readonly, nonatomic) long long largeCardTemplateType;
@property (readonly, nonatomic) NSString *inlineDescription;
@property (weak, nonatomic) PKDiscoveryItem *item;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setMediaBundle:(id)a0;
- (void)localizeWithBundle:(id)a0;
- (void)localizeWithBundle:(id)a0 table:(id)a1;

@end
