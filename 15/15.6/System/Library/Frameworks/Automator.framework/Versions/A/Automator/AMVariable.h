@class NSString, AMDescriptionViewItem, NSSet, NSDictionary, NSImage, NSMutableSet, NSMutableArray, AMBundleAction;

@interface AMVariable : NSObject <NSSecureCoding, NSCopying> {
    NSDictionary *_providesDictionary;
    NSMutableSet *_children;
    NSMutableArray *_childrenUUIDs;
}

@property (class, readonly, nonatomic) NSDictionary *_variableIdentifiersToTypes;
@property (class, readonly, nonatomic) NSDictionary *_variableSpecificIdentifiersToIdentifiers;
@property (class, readonly, nonatomic) NSDictionary *_variableIdentifiersToTemplateIdentifiers;
@property (class, readonly, nonatomic) AMBundleAction *sharedRunShellScriptAction;
@property (class, readonly) char supportsSecureCoding;

@property (copy) id storedEvaluatedValue;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) id value;
@property (copy) NSString *type;
@property (copy) NSString *identifier;
@property (copy, nonatomic) NSDictionary *providesDictionary;
@property (getter=isCached, setter=setCached:) char cached;
@property (retain) NSImage *icon;
@property (copy) NSString *UUID;
@property (retain, nonatomic) NSString *pathValue;
@property (retain, nonatomic) NSMutableArray *childrenUUIDs;
@property (retain, nonatomic) NSMutableSet *children;
@property (retain, nonatomic) id format;
@property (readonly, nonatomic) NSString *nameWithVariableForm;
@property (readonly, nonatomic, getter=isEditable) char editable;
@property (readonly, nonatomic, getter=isBuiltIn) char builtIn;
@property (readonly, nonatomic) char isTemplate;
@property (readonly, nonatomic) char isChild;
@property (readonly, nonatomic) char am_isText;
@property (readonly, nonatomic) char isPath;
@property (readonly, nonatomic) char isAppleScript;
@property (readonly, nonatomic) char isShellScript;
@property (readonly, nonatomic) char isCurrentDate;
@property (readonly, nonatomic) char isCurrentTime;
@property (readonly, nonatomic) char isStorage;
@property (readonly, nonatomic) char isLeaf;
@property (readonly, nonatomic) NSString *UUIDWithVariableForm;
@property (readonly, nonatomic) NSDictionary *propertyList;
@property (readonly, nonatomic) char hasChildren;
@property (readonly, nonatomic) NSSet *dependentVariables;
@property (readonly, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) NSString *userDescription;
@property (readonly, nonatomic) AMDescriptionViewItem *_descriptionViewItem;
@property (readonly, nonatomic) NSString *evaluatedStringValue;

+ (char)checkVariablesDirectoryOnDisk;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPropertyList:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (char)addChild:(id)a0;
- (long long)localizedCaseInsensitiveCompare:(id)a0;
- (void)removeChild:(id)a0;
- (void)addChildren:(id)a0;
- (char)writeToDisk;
- (id)eventDidFail:(const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)a0 withError:(id)a1;
- (id)AppleScriptValue;
- (id)_commandLineValueWithCommand:(id)a0 arguments:(id)a1;
- (id)addressBookValue;
- (char)canAddChild:(id)a0;
- (id)commandLineValue;
- (id)computerNameValue;
- (void)convertTemplateIdentifier;
- (id)copyWithZone:(struct _NSZone { } *)a0 newChildren:(char)a1;
- (id)currentDateTimeValue;
- (id)evaluatedPathValueForceEvaluation:(char)a0;
- (id)evaluatedStringValueForceEvaluation:(char)a0;
- (id)evaluatedValueForceEvaluation:(char)a0;
- (id)hostNameValue;
- (id)initWithName:(id)a0 identifier:(id)a1 value:(id)a2;
- (char)isAMVariable__;
- (id)menuWithRepresentedObject:(id)a0 target:(id)a1;
- (id)osVersionValue;
- (id)randomIdentifierValue;
- (id)randomNumberValue;
- (char)removeFromDisk;
- (void)renameUniquelyWithExistingVariableNames:(id)a0;
- (void)replaceChild:(id)a0 withChild:(id)a1;
- (id)shellScriptValue;
- (id)userNameValue;

@end
