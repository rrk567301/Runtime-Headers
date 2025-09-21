@interface DRSDampeningEnforcementSettings : NSObject

@property (nonatomic) char enforcesResourceHysteresis;
@property (nonatomic) char enforcesResourceCap;
@property (nonatomic) char enforcesResourceDownsampling;
@property (nonatomic) char enforcesSignatureHysteresis;
@property (nonatomic) char enforcesSignatureCap;
@property (nonatomic) char enforcesSignatureDownsampling;
@property (nonatomic) char enforcesTotalCap;

- (id)debugDescription;
- (id)init;
- (char)isEqual:(id)a0;
- (id)_moRepresentation:(id)a0;
- (id)initWithMO:(id)a0;
- (id)jsonCompatibleDictRepresentation;
- (void)setAllEnforcement:(char)a0;

@end
