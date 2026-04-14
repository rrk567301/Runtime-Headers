@interface DRSDampeningEnforcementSettings : NSObject

@property (nonatomic) BOOL enforcesResourceHysteresis;
@property (nonatomic) BOOL enforcesResourceCap;
@property (nonatomic) BOOL enforcesResourceDownsampling;
@property (nonatomic) BOOL enforcesSignatureHysteresis;
@property (nonatomic) BOOL enforcesSignatureCap;
@property (nonatomic) BOOL enforcesSignatureDownsampling;
@property (nonatomic) BOOL enforcesTotalCap;

- (id)jsonCompatibleDictRepresentation;
- (id)debugDescription;
- (id)initWithMO:(id)a0;
- (void)setAllEnforcement:(BOOL)a0;
- (id)init;
- (id)_moRepresentation:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
