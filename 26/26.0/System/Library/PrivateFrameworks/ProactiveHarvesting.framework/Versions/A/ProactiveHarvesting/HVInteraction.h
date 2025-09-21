@class NSString, INInteraction;

@interface HVInteraction : NSObject <NSCopying, BMIdentifiableContentEvent>

@property (readonly, nonatomic) NSString *uniqueId;
@property (readonly, nonatomic) NSString *domainId;
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) INInteraction *interaction;
@property (readonly, nonatomic) NSString *bundleIdentifier;

+ (id)domainIdForInteractionGroupId:(id)a0;
+ (id)uniqueIdForInteractionIdentifier:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithInteraction:(id)a0 bundleIdentifier:(id)a1;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
