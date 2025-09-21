@class NSString;

@interface SFSearchViewAppearFeedback : SFFeedback

@property (nonatomic) unsigned long long viewAppearEvent;
@property (nonatomic) char isOnLockScreen;
@property (nonatomic) char isOverApp;
@property (nonatomic) char readerTextAvailable;
@property (copy, nonatomic) NSString *preexistingInput;
@property (copy, nonatomic) NSString *originatingApp;
@property (nonatomic) char isUsingLoweredSearchBar;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEvent:(unsigned long long)a0;

@end
