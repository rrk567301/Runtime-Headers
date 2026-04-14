@class NSString;

@interface TRIContentTrackingId : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *str;

+ (id)contentIdWithStr:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToContentId:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithReplacementStr:(id)a0;
- (id)initWithStr:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;

@end
