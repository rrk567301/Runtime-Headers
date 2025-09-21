@class NSString, NSArray, NSMutableSet, CNAutocompleteResultNamer, CNAutocompleteResult;

@interface CNAutocompleteSuggestionResultItem : NSObject

@property (retain, nonatomic) CNAutocompleteResultNamer *namer;
@property (retain, nonatomic) CNAutocompleteResult *result;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) char isSelected;
@property (retain, nonatomic) NSArray *contacts;
@property (retain, nonatomic) NSMutableSet *handles;
@property (retain, nonatomic) NSArray *members;
@property (readonly, nonatomic) char isGroup;

+ (id)log;
+ (id)contactStoreForFetchingContacts;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)nameFromContact;
- (char)isSelectedForHandles:(id)a0;
- (void)loadContacts;
- (void)loadName;
- (id)unknownContactForResult:(id)a0;

@end
