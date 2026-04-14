@class NSString;

@interface NSIATextInputActionsEventLazy : NSObject

@property unsigned long long source;
@property unsigned long long type;
@property long long netCharacters;
@property unsigned long long userRemovedCharacters;
@property long long netEmojiCharacters;
@property unsigned long long userRemovedEmojiCharacters;
@property unsigned long long inputActionCount;
@property BOOL isEmojiSearch;
@property BOOL isMarkedText;
@property BOOL sessionIsModeless;
@property (copy, nonatomic) NSString *sessionActions;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *region;
@property (copy, nonatomic) NSString *keyboardVariant;
@property (copy, nonatomic) NSString *keyboardLayout;
@property (copy, nonatomic) NSString *keyboardType;
@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSString *internalProcId;

- (void).cxx_destruct;
- (BOOL)areMeasuresAllZero;
- (void)dispatchTextInputActionsEventLazy;
- (id)initWithbundleId:(id)a0;
- (BOOL)isDispatchable;
- (void)resetCounts;

@end
