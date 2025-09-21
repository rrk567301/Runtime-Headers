@class NSString;

@interface STMutableBackgroundActivitiesStatusDomainDataChangeContext : STBackgroundActivitiesStatusDomainDataChangeContext <STMutableStatusDomainDataChangeContext>

@property (nonatomic, getter=isUserInitiated) char userInitiated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setUserInitiated:(char)a0;

@end
