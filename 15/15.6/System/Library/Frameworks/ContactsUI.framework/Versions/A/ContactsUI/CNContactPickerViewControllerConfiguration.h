@interface CNContactPickerViewControllerConfiguration : NSObject

@property (nonatomic, getter=shouldShowSelectedContact) char showsSelectedContact;
@property (nonatomic, getter=shouldHighlightSelectedContact) char highlightsSelectedContact;

+ (id)defaultConfiguration;

- (id)init;

@end
