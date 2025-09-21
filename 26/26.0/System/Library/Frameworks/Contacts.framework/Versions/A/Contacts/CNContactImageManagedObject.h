@class NSString, CNContactPosterManagedObject, NSData, NSNumber;

@interface CNContactImageManagedObject : CNContactPosterDataManagedItem

@property (retain, nonatomic) NSData *imageData;
@property (retain, nonatomic) NSString *cropRectString;
@property (retain, nonatomic) NSString *displayString;
@property (retain, nonatomic) NSNumber *source;
@property (retain, nonatomic) NSString *sourceIdentifier;
@property (retain, nonatomic) NSNumber *imageDataEncodingType;
@property (retain, nonatomic) NSString *variant;
@property (retain, nonatomic) NSData *poseConfigurationData;
@property (retain, nonatomic) CNContactPosterManagedObject *pairedPoster;

+ (id)entityName;

- (void)acceptVisitor:(id)a0;
- (id)pairedItem;
- (id)cropRectStringFromCGRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupWithContactImage:(id)a0 contactIdentifier:(id)a1;
- (void)setupWithContactImage:(id)a0 contactIdentifier:(id)a1 externalDetails:(id)a2 isCurrent:(BOOL)a3;
- (void)setupWithContactImage:(id)a0 pairedPoster:(id)a1 contactIdentifier:(id)a2;
- (void)setupWithContactImage:(id)a0 pairedPoster:(id)a1 contactIdentifier:(id)a2 externalDetails:(id)a3 isCurrent:(BOOL)a4;
- (void)updateWithContactImage:(id)a0;
- (void)updateWithContactImage:(id)a0 pairedPoster:(id)a1;

@end
