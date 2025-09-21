@class NSString, NSArray, NSNumber, NSColor;

@interface PPGesture : NSObject {
    NSString *mNibFileName;
    NSString *mMovieName;
    NSArray *mChoicesArray;
}

@property (readonly) NSString *name;
@property (readonly) NSString *note;
@property (retain) NSString *label;
@property (getter=isEnabled) char enabled;
@property (readonly, weak) NSColor *nameColor;
@property (readonly, getter=isGroup) char group;
@property long long state;
@property (readonly) char supportsMixedState;
@property (readonly) char hasCheckbox;
@property (readonly) char hasOptions;
@property (readonly) char hasChoices;
@property (readonly) NSNumber *choicePopupAlignment;
@property (readonly) NSString *movieChapterName;
@property (readonly, weak) NSArray *movieChapterNames;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (void)startAnimation;
- (void)stopAnimation;
- (char)refreshIfNeeded;
- (void)adjustUI;
- (void)readPreferences;
- (void)choices:(id)a0;
- (void)enableGesture:(id)a0;
- (id)initWithDictionary:(id)a0 andReadPreferences:(char)a1;
- (id)movieChapterNames;
- (void)options:(id)a0;
- (void)prepareChoicePopup:(id)a0;

@end
