@class PRLikeness, NSString, NSData;

@interface CNLikeness : NSObject

@property (nonatomic) struct CGImage { } *originalLikenessImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalLikenessCropRect;
@property (nonatomic) char hasPictureDataBeenEdited;
@property (retain, nonatomic) PRLikeness *personaLikeness;
@property (retain, nonatomic) NSString *contactIdentifier;
@property (retain, nonatomic) NSString *sourceContainerName;
@property (retain, nonatomic) NSString *sourceContainerIdentifier;
@property (nonatomic) char hasBeenPersisted;
@property (readonly, nonatomic) char isEditable;
@property (readonly, nonatomic) char hasBeenEdited;
@property (readonly, nonatomic) PRLikeness *originalLikeness;
@property (retain, nonatomic) NSData *memojiMetadata;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithLikeness:(id)a0 contactIdentifier:(id)a1 sourceContainerName:(id)a2 sourceContainerIdentifier:(id)a3 isEditable:(char)a4 hasBeenPersisted:(char)a5;

@end
