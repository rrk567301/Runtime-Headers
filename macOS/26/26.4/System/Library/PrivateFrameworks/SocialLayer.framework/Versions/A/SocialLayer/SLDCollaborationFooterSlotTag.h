@class NSString;

@interface SLDCollaborationFooterSlotTag : SLDSlotTag <NSCopying>

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) double maxWidth;

+ (id)tagForTitle:(id)a0 subtitle:(id)a1 maxWidth:(double)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 maxWidth:(double)a2;

@end
