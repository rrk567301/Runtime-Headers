@class NSString;

@interface TRIContentTrackingId : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *str;

+ (id)contentIdWithStr:(id)a0;

- (id)initWithStr:(id)a0;
- (id)copyWithReplacementStr:(id)a0;
- (id)description;
- (id)init;
- (BOOL)isEqualToContentId:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
