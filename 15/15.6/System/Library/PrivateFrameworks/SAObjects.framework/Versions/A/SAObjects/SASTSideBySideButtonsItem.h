@class NSString, SAUIColor;
@protocol SASTTemplateAction;

@interface SASTSideBySideButtonsItem : AceObject <SASTTemplateItem>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *buttonsViewStyle;
@property (retain, nonatomic) id<SASTTemplateAction> primaryButtonAction;
@property (nonatomic) char primaryButtonEnabled;
@property (copy, nonatomic) NSString *primaryButtonLabel;
@property (retain, nonatomic) SAUIColor *primaryButtonTextColor;
@property (retain, nonatomic) id<SASTTemplateAction> secondaryButtonAction;
@property (nonatomic) char secondaryButtonEnabled;
@property (copy, nonatomic) NSString *secondaryButtonLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sideBySideButtonsItem;
+ (id)sideBySideButtonsItemWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
