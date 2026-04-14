@class NSString;

@interface IATextInputActionsEvent : NSObject <IATelemetryEvent>

@property long long source;
@property long long type;
@property long long netCharacters;
@property unsigned long long userRemovedCharacters;
@property long long netEmojiCharacters;
@property unsigned long long userRemovedEmojiCharacters;
@property unsigned long long inputActionCount;
@property BOOL isEmojiSearch;
@property BOOL isMarkedText;
@property BOOL sessionIsModeless;
@property (nonatomic) NSString *sessionActions;
@property (nonatomic) NSString *language;
@property (nonatomic) NSString *region;
@property (nonatomic) NSString *keyboardVariant;
@property (nonatomic) NSString *keyboardLayout;
@property (nonatomic) NSString *keyboardType;
@property (nonatomic) NSString *bundleId;

- (id)initWithbundleId:(id)a0;
- (BOOL)isDispatchable;
- (void)dispatchEvent:(id /* block */)a0;
- (void)dispatchEvent;
- (void)resetMeasures;

@end
