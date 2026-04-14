@class NSString, NSImageView;

@interface AMPModalLargeHeaderLockup : AMPModalSmallHeaderLockup

@property (retain, nonatomic) NSImageView *symbolImage;
@property (copy, nonatomic) NSString *symbolName;
@property (copy, nonatomic) NSString *symbolAXDescription;

+ (id)keyPathsForValuesAffectingSymbolImageToUse;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)commonSetup;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbol:(id)a2 symbolAXDescription:(id)a3;
- (id)propertyKeysForViewSpy;
- (id)symbolImageToUse;

@end
