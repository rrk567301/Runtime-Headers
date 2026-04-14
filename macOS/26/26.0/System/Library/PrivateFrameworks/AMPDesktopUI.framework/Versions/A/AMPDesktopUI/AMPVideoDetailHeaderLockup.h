@class NSString, NSAttributedString;
@protocol AMPVideoDetailHeaderLockupModel;

@interface AMPVideoDetailHeaderLockup : AMPBindableView {
    void /* unknown type, empty encoding */ artwork;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ genre;
    void /* unknown type, empty encoding */ expiration;
    void /* unknown type, empty encoding */ descriptionArea;
    void /* unknown type, empty encoding */ metadata;
    void /* unknown type, empty encoding */ badges;
    void /* unknown type, empty encoding */ playButton;
    void /* unknown type, empty encoding */ extrasButton;
    void /* unknown type, empty encoding */ artworkAspectConstraint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_boldFont;
}

@property (nonatomic, retain) id<AMPVideoDetailHeaderLockupModel> viewModel;
@property (nonatomic, readonly) double titleVisualOffset;
@property (nonatomic) double artworkAspect;
@property (nonatomic, readonly) BOOL flipped;
@property (nonatomic, readonly) BOOL playButtonsShouldBeEnabled;
@property (nonatomic, readonly) BOOL hideExtrasButton;
@property (nonatomic, readonly) BOOL hidePlayExtraButtonStack;
@property (nonatomic, readonly) NSAttributedString *metadataLine;
@property (nonatomic, readonly) NSString *expirationLine;
@property (nonatomic, readonly) NSString *descriptionTextToShow;
@property (nonatomic, readonly) BOOL descriptionIsHidden;
@property (nonatomic, readonly) NSString *genreLine;
@property (nonatomic, readonly) BOOL calloutStackIsHidden;

+ (id)keyPathsForValuesAffectingCalloutStackIsHidden;
+ (id)keyPathsForValuesAffectingDescriptionIsHidden;
+ (id)keyPathsForValuesAffectingDescriptionTextToShow;
+ (id)keyPathsForValuesAffectingExpirationLine;
+ (id)keyPathsForValuesAffectingGenreLine;
+ (id)keyPathsForValuesAffectingHideExtrasButton;
+ (id)keyPathsForValuesAffectingHidePlayExtraButtonStack;
+ (id)keyPathsForValuesAffectingMetadataLine;
+ (id)keyPathsForValuesAffectingPlayButtonsShouldBeEnabled;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)doDescriptionClicked:(id)a0;
- (void)doExtrasClicked:(id)a0;
- (void)doMoreClicked:(id)a0;
- (void)doPlayClicked:(id)a0;

@end
