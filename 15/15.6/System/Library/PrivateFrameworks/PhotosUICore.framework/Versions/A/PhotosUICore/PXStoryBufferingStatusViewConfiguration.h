@class NSString;

@interface PXStoryBufferingStatusViewConfiguration : NSObject <PXGViewUserData>

@property (nonatomic) char wantsBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;

@end
