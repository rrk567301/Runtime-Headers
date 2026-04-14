@class EKObjectID, NSString;

@interface EKImageKey : NSObject <NSCopying>

@property (readonly, nonatomic) EKObjectID *sourceID;
@property (readonly, nonatomic) NSString *identifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithSourceID:(id)a0 identifier:(id)a1;

@end
