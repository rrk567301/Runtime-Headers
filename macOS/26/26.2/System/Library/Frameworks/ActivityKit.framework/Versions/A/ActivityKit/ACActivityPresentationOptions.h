@class NSArray;

@interface ACActivityPresentationOptions : NSObject <NSCopying>

@property (nonatomic, getter=isUserDismissalAllowedOnLockScreen) BOOL userDismissalAllowedOnLockScreen;
@property (nonatomic) BOOL shouldSuppressAlertContentOnLockScreen;
@property (nonatomic) BOOL shouldSuppressAlertContentOnHostApplication;
@property (nonatomic) BOOL showsAuthorizationOptions;
@property (nonatomic, getter=isActionButtonInitiated) BOOL actionButtonInitiated;
@property (nonatomic) BOOL shouldShowSystemAperture;
@property (retain, nonatomic) NSArray *destinations;
@property (nonatomic) long long authorizationOptionsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_init;
- (void).cxx_destruct;
- (id)initWithDestinations:(id)a0;
- (id)initFromSwift:(BOOL)a0;

@end
