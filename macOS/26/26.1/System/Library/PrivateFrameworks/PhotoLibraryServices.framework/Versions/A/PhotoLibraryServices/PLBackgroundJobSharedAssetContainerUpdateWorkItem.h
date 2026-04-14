@class NSSet;

@interface PLBackgroundJobSharedAssetContainerUpdateWorkItem : NSObject <NSCopying>

@property (readonly, nonatomic) long long flags;
@property (readonly, nonatomic) NSSet *identifiers;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFlags:(long long)a0 identifiers:(id)a1;

@end
