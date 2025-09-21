@class NSArray, NSString, NSURL, NSDate, NSNumber, NSDictionary;

@interface SLHighlight : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *attributions;
@property (readonly, nonatomic) NSNumber *score;
@property (readonly, nonatomic) char isLocalResource;
@property (readonly, nonatomic) char isSyndicatableMedia;
@property (readonly, copy, nonatomic) NSURL *livePhotoComplementURL;
@property (readonly, copy, nonatomic) NSString *resourceUTI;
@property (readonly, nonatomic) unsigned long long syndicationType;
@property (readonly, copy, nonatomic) NSURL *resolvedURL;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSURL *resourceURL;
@property (readonly, copy, nonatomic) NSDictionary *supplementaryData;

+ (id)Sha256ForData:(id)a0 withSalt:(id)a1;
+ (id)requiredSpotlightAttributeKeys;
+ (id)errorForHighlightDomain:(id)a0 andCode:(long long)a1 andUnderlyingError:(id *)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithCSSearchableItem:(id)a0 error:(id *)a1;
- (id)initWithCSSearchableItem:(id)a0;
- (id)_uniqueIdentifierForResourceURL:(id)a0;
- (id)initWithAttribution:(id)a0;
- (id)initWithCSSearchableItemUniqueIdentifier:(id)a0 error:(id *)a1;
- (id)initWithCSSearchableItemUniqueIdentifier:(id)a0 forContentType:(unsigned char)a1 error:(id *)a2;
- (id)initWithPortraitHighlight:(id)a0 error:(id *)a1;
- (id)portraitHighlight;

@end
