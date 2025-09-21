@class NSString, NSNumber, NSURL;

@interface TVRCPlayItemInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *mediaIdentifier;
@property (readonly, nonatomic) NSNumber *kind;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) char isValid;
@property (readonly, nonatomic) char hasMediaIdentifierAndKind;
@property (readonly, nonatomic) char hasURL;

+ (id)playItemWithDictionary:(id)a0;
+ (id)playItemWithMediaIdentifier:(id)a0 kind:(unsigned long long)a1;
+ (id)playItemWithURL:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithMediaIdentifier:(id)a0 kind:(id)a1 url:(id)a2;

@end
