@class NSString;

@interface PPSocialHighlightStoreRequestKey : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long limit;
@property (readonly, nonatomic) NSString *client;
@property (readonly, nonatomic) NSString *variant;
@property (readonly, nonatomic) NSString *reason;

+ (id)socialHighlightStoreRequestKeyWithLimit:(unsigned long long)a0 client:(id)a1 variant:(id)a2 reason:(id)a3;

- (id)copyWithReplacementClient:(id)a0;
- (id)copyWithReplacementLimit:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithReplacementVariant:(id)a0;
- (id)init;
- (id)copyWithReplacementReason:(id)a0;
- (id)description;
- (BOOL)isEqualToSocialHighlightStoreRequestKey:(id)a0;
- (id)initWithLimit:(unsigned long long)a0 client:(id)a1 variant:(id)a2 reason:(id)a3;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
