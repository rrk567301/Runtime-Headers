@class NSArray, NSString, NSData;

@interface PKFieldProperties : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long technology;
@property (readonly, nonatomic) long long terminalType;
@property (readonly, nonatomic) long long valueAddedServiceMode;
@property (readonly, nonatomic) long long accessTerminalSubtype;
@property (readonly, nonatomic) char shouldIgnore;
@property (nonatomic) char authenticationRequired;
@property (nonatomic) char backgroundTransaction;
@property (nonatomic) char secondaryPropertiesRequired;
@property (nonatomic) char secondaryPropertiesAcquired;
@property (nonatomic) long long carKeyBrandCode;
@property (nonatomic) unsigned long long pairingRequested;
@property (nonatomic) unsigned long long fieldType;
@property (copy, nonatomic) NSArray *TCIs;
@property (copy, nonatomic) NSArray *merchantIdentifiers;
@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSString *credentialIdentifier;
@property (copy, nonatomic) NSData *readerIdentifier;

+ (id)fieldPropertiesForFieldNotification:(id)a0;
+ (id)fieldPropertiesForSTSFieldNotification:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTechnology:(unsigned long long)a0 terminalType:(long long)a1 accessTerminalSubtype:(long long)a2 valueAddedServiceMode:(long long)a3;

@end
