@class NSString;

@interface PKDiscoveryTextBlockShelf : PKDiscoveryShelf

@property (retain, nonatomic) NSString *localizedBody;
@property (retain, nonatomic) NSString *localizedLede;
@property (retain, nonatomic) NSString *localizedSectionHeaderLine;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) NSString *bodyKey;
@property (readonly, nonatomic) NSString *ledeKey;
@property (readonly, nonatomic) NSString *sectionHeaderLineKey;

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
