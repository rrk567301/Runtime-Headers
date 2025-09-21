@class NSArray, NSString, NSData, NSObject;
@protocol NFAppletCollection;

@interface NFApplet : NSObject <NSSecureCoding, NSCopying> {
    NSObject<NFAppletCollection> *_appletCollection;
    NSData *_groupHeadIDAsData;
    NSArray *_groupMemberIDs;
    NSArray *_referencedAppIDs;
    NSData *_packageIdentifierAsData;
    NSData *_moduleIdentifierAsData;
    NSArray *_multiSEApplicationGroupMemberIDs;
    NSData *_typeFSystemCode;
    unsigned char _groupActivationStyle;
    char _isContainer;
    char _isProxy;
    unsigned char _appletGPState;
}

@property (class, readonly) char supportsSecureCoding;

@property (weak) NSObject<NFAppletCollection> *appletCollection;
@property (readonly, nonatomic) NSArray *groupMemberIDs;
@property (readonly, nonatomic) NSString *groupHeadID;
@property (readonly, nonatomic) NSArray *multiSEGroupMemberIDs;
@property (readonly, nonatomic) NSString *moduleIdentifier;
@property (readonly, nonatomic) NSData *moduleIdentifierAsData;
@property (readonly, nonatomic) unsigned long long rawGPState;
@property (readonly, nonatomic) char isContainer;
@property (readonly, nonatomic) char isProxy;
@property (readonly) unsigned char groupActivationStyle;
@property (readonly, retain, nonatomic) NSString *identifier;
@property (readonly, retain, nonatomic) NSString *seIdentifier;
@property (readonly, retain, nonatomic) NSData *identifierAsData;
@property (readonly, retain, nonatomic) NSData *discretionaryData;
@property (readonly, retain, nonatomic) NSString *packageIdentifier;
@property (readonly, retain, nonatomic) NFApplet *groupHead;
@property (readonly, retain, nonatomic) NSArray *groupMembers;
@property (readonly, retain, nonatomic) NSArray *referencedApps;
@property (readonly, nonatomic) unsigned char family;
@property (readonly, nonatomic) unsigned char lifecycleState;
@property (readonly, nonatomic) unsigned char activationState;
@property (readonly, nonatomic) unsigned char supportedTypeFSystem;
@property (readonly, nonatomic) long long seOS;
@property (readonly, nonatomic) char authTransientSupport;
@property (readonly, nonatomic) char authTransientConfigurable;
@property (readonly, nonatomic) char isTypeF;
@property (readonly, nonatomic) char suppressTypeB;
@property (readonly, nonatomic) char suppressTypeA;
@property (readonly, nonatomic) char isGPLocked;
@property (readonly, nonatomic) char containsSubKeys;
@property (readonly, nonatomic) char managedBySP;
@property (readonly, nonatomic) NSData *instanceACL;

+ (id)aidListForPrinting:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)identifier;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)asDictionary;
- (id)groupHeadID;
- (id)packageIdentifier;
- (id)moduleIdentifier;
- (id)multiSSDMembers;
- (void)setInstanceACL:(id)a0;
- (void)_initManagedBySP;
- (void)_setIsActive:(char)a0;
- (char)isEqualToApplet:(id)a0;
- (char)isPPSEControllable;

@end
