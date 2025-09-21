@class DRSDampeningManagerMO;

@interface DRSDampeningEnforcementSettingsMO : NSManagedObject

@property (nonatomic) char enforcesResourceCap;
@property (nonatomic) char enforcesResourceDownsampling;
@property (nonatomic) char enforcesResourceHysteresis;
@property (nonatomic) char enforcesSignatureCap;
@property (nonatomic) char enforcesSignatureDownsampling;
@property (nonatomic) char enforcesSignatureHysteresis;
@property (nonatomic) char enforcesTotalCap;
@property (retain, nonatomic) DRSDampeningManagerMO *parentDampeningManager;

+ (id)fetchRequest;

@end
