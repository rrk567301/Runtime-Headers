@class NSString, PKDiscoveryMedia;

@interface PKDiscoveryInlineMediaShelf : PKDiscoveryShelf

@property (retain, nonatomic) NSString *localizedCaption;
@property (readonly, nonatomic) PKDiscoveryMedia *media;
@property (readonly, nonatomic) NSString *captionKey;
@property (readonly, nonatomic) long long displayType;

+ (BOOL)supportsSecureCoding;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)setMediaBundle:(id)a0;
- (void)localizeWithBundle:(id)a0;
- (void)localizeWithBundle:(id)a0 table:(id)a1;

@end
