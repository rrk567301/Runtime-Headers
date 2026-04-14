@class NSString, PKDiscoveryMedia;

@interface PKDiscoveryInlineMediaShelf : PKDiscoveryShelf

@property (retain, nonatomic) NSString *localizedCaption;
@property (readonly, nonatomic) PKDiscoveryMedia *media;
@property (readonly, nonatomic) NSString *captionKey;
@property (readonly, nonatomic) long long displayType;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void)setMediaBundle:(id)a0;
- (void)localizeWithBundle:(id)a0;
- (void)localizeWithBundle:(id)a0 table:(id)a1;

@end
