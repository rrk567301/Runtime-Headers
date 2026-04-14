@class NSNumber, NSString;

@interface ICMusicSubscriptionStatusCacheKey : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *DSID;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *storefrontIdentifier;

- (id)stringRepresentation;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)dictionaryRepresentationIncludingDSID:(BOOL)a0;
- (id)description;
- (id)initWithStringRepresentation:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0 requiringDSID:(BOOL)a1;

@end
