@interface NSScriptToManyRelationshipDescription : NSScriptPropertyDescription {
    unsigned int _plistAppleEventCode;
    char _isLocationRequiredToCreate;
    char _shouldByDefaultInsertAtBeginning;
}

+ (id)defaultKeyMarker;
+ (id)propertyDescriptionFromKey:(id)a0 implDeclaration:(id)a1 presoDeclaration:(id)a2 suiteName:(id)a3 className:(id)a4;

- (id)_descriptionWithTabCount:(unsigned long long)a0;
- (unsigned int)appleEventCode;
- (id)initWithKey:(id)a0 type:(id)a1 access:(unsigned long long)a2 isHidden:(char)a3 shouldByDefaultInsertAtBeginning:(char)a4 accessGroupDescriptions:(id)a5;
- (id)initWithKey:(id)a0 type:(id)a1 isReadOnly:(char)a2 appleEventCode:(unsigned int)a3 isLocationRequiredToCreate:(char)a4;
- (char)isLocationRequiredToCreate;
- (char)matchesAppleEventCode:(unsigned int)a0;
- (char)matchesPresentableName:(id)a0;
- (void)reconcileToSuiteRegistry:(id)a0 suiteName:(id)a1 className:(id)a2;
- (char)shouldByDefaultInsertAtBeginning;

@end
