@interface ABCardViewLinkedPeopleProperty : ABCardViewProperty

+ (id)localizedLabel;
+ (id /* block */)linkedContactsComparatorWithMapper:(id)a0;

- (id)nameForContact:(id)a0;
- (char)allowsCustomLabels;
- (id)emptyValueForMultiValue:(id)a0 label:(id)a1;
- (char)isValueEmpty:(id)a0;
- (id)multiValueFromLinkedContacts:(id)a0 personMapper:(id)a1;
- (id)multiValueWithPersonMapper:(id)a0;
- (char)shouldReloadViewOnUserEdit;
- (char)shouldShowNamesForContacts:(id)a0;

@end
