@class NSString, NSData;

@interface VIThirdPartyObject : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *objectIdentifier;
@property (readonly, nonatomic) NSString *imageURL;
@property (readonly, nonatomic) NSString *thumbnailURL;
@property (readonly, nonatomic) NSData *metadata;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithObjectIdentifier:(id)a0 imageURL:(id)a1 thumbnailURL:(id)a2 metadata:(id)a3;

@end
