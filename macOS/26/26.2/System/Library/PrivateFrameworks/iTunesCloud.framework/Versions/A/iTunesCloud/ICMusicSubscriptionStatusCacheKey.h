@class NSNumber, NSString;

@interface ICMusicSubscriptionStatusCacheKey : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *DSID;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *storefrontIdentifier;

- (id)initWithDictionaryRepresentation:(id)a0 requiringDSID:(BOOL)a1;
- (id)dictionaryRepresentationIncludingDSID:(BOOL)a0;
- (id)initWithStringRepresentation:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)stringRepresentation;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
