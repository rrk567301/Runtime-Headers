@class NSString, NSLocale;

@interface AMTranslationAssetInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSLocale *locale;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) unsigned char assetStatus;
@property (nonatomic) BOOL isSuggested;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
