@interface ABCardViewLinkedPeopleProperty : ABCardViewProperty

+ (id)localizedLabel;
+ (id /* block */)linkedContactsComparatorWithMapper:(id)a0;

- (id)nameForContact:(id)a0;
- (BOOL)isValueEmpty:(id)a0;
- (id)emptyValueForMultiValue:(id)a0 label:(id)a1;
- (BOOL)allowsCustomLabels;
- (BOOL)shouldReloadViewOnUserEdit;
- (id)multiValueFromLinkedContacts:(id)a0 personMapper:(id)a1;
- (id)multiValueWithPersonMapper:(id)a0;
- (BOOL)shouldShowNamesForContacts:(id)a0;

@end
