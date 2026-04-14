@class NSString, NSNumber, NSURL;

@interface TVRCPlayItemInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *mediaIdentifier;
@property (readonly, nonatomic) NSNumber *kind;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL hasMediaIdentifierAndKind;
@property (readonly, nonatomic) BOOL hasURL;

+ (id)playItemWithDictionary:(id)a0;
+ (id)playItemWithMediaIdentifier:(id)a0 kind:(unsigned long long)a1;
+ (id)playItemWithURL:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithMediaIdentifier:(id)a0 kind:(id)a1 url:(id)a2;

@end
