@class NSString;

@interface IASTextInputActionsEvent : NSObject <IATelemetryEvent>

@property long long source;
@property long long type;
@property long long netCharacters;
@property unsigned long long userRemovedCharacters;
@property long long netEmojiCharacters;
@property unsigned long long userRemovedEmojiCharacters;
@property unsigned long long inputActionCount;
@property char isEmojiSearch;
@property char isMarkedText;
@property char sessionIsModeless;
@property (copy, nonatomic) NSString *sessionActions;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *region;
@property (copy, nonatomic) NSString *keyboardVariant;
@property (copy, nonatomic) NSString *keyboardLayout;
@property (copy, nonatomic) NSString *keyboardType;
@property (copy, nonatomic) NSString *inputModeIdentifier;
@property (copy, nonatomic) NSString *bundleId;

- (void).cxx_destruct;
- (void)dispatchEvent:(id /* block */)a0;
- (void)dispatchEvent;
- (id)initWithbundleId:(id)a0;
- (char)isDispatchable;
- (void)resetMeasures;

@end
