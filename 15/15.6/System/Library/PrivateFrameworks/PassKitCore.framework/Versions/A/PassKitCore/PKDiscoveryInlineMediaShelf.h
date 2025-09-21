@class NSString, PKDiscoveryMedia;

@interface PKDiscoveryInlineMediaShelf : PKDiscoveryShelf

@property (retain, nonatomic) NSString *localizedCaption;
@property (readonly, nonatomic) PKDiscoveryMedia *media;
@property (readonly, nonatomic) NSString *captionKey;
@property (readonly, nonatomic) long long displayType;

+ (char)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)localizeWithBundle:(id)a0;
- (void)localizeWithBundle:(id)a0 table:(id)a1;

@end
