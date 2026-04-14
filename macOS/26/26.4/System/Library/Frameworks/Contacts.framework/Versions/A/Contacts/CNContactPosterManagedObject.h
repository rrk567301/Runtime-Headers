@class NSData, CNContactImageManagedObject;

@interface CNContactPosterManagedObject : CNContactPosterDataManagedItem

@property (retain, nonatomic) NSData *posterData;
@property (retain, nonatomic) NSData *posterMetadata;
@property (nonatomic) BOOL contentIsSensitive;
@property (retain, nonatomic) NSData *watchPosterImageData;
@property (retain, nonatomic) CNContactImageManagedObject *pairedImage;

+ (id)entityName;

- (void)acceptVisitor:(id)a0;
- (id)pairedItem;
- (void)_setupWithContactPoster:(id)a0 pairedImage:(id)a1 contactIdentifier:(id)a2 externalDetails:(id)a3 isCurrent:(BOOL)a4;
- (void)_updateWithContactPoster:(id)a0 pairedImage:(id)a1;
- (void)setupWithContactPoster:(id)a0 contactIdentifier:(id)a1;
- (void)setupWithContactPoster:(id)a0 contactIdentifier:(id)a1 externalDetails:(id)a2 isCurrent:(BOOL)a3;
- (void)setupWithContactPoster:(id)a0 pairedImage:(id)a1 contactIdentifier:(id)a2;
- (void)setupWithContactPoster:(id)a0 pairedImage:(id)a1 contactIdentifier:(id)a2 externalDetails:(id)a3 isCurrent:(BOOL)a4;
- (void)updateWithContactPoster:(id)a0;
- (void)updateWithContactPoster:(id)a0 pairedImage:(id)a1;

@end
