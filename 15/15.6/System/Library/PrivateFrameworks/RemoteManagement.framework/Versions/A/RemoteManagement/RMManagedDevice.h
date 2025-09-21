@class NSString;

@interface RMManagedDevice : NSObject

@property (class, readonly, nonatomic) RMManagedDevice *currentManagedDevice;

@property (readonly, nonatomic) char isSupervised;
@property (readonly, nonatomic) char isMDMEnrolled;
@property (readonly, nonatomic) NSString *mdmProfileIdentifier;
@property (readonly, nonatomic) char isSharediPad;

- (void)refreshState;
- (id)getPropertyForKey:(id)a0 scope:(long long)a1;
- (void)setProperty:(id)a0 forKey:(id)a1 scope:(long long)a2;

@end
