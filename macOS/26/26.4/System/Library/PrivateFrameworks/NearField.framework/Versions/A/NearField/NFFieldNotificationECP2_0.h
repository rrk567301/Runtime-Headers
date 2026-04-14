@class NSArray, NSMutableDictionary, NSData;

@interface NFFieldNotificationECP2_0 : NFFieldNotification <NSCopying>

@property (nonatomic) BOOL ignoreRFTechOnIsEqual;
@property (retain, nonatomic) NSMutableDictionary *userInfo;
@property (readonly) BOOL odaRequired;
@property (readonly) unsigned int terminalMode;
@property (readonly) unsigned long long terminalType;
@property (readonly) unsigned char terminalSubType;
@property (readonly, retain) NSArray *tciArray;
@property (readonly, retain) NSData *openLoopSchemeBitfield;
@property (readonly, retain) NSData *homeKitSchemeDataPayload;
@property (readonly, nonatomic) NSData *readerIdentifier;
@property (readonly, nonatomic) unsigned int pairingMode;
@property (readonly) NSData *terminalTypeData;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)_initCategoryWithType:(unsigned long long)a0 subType:(unsigned char)a1;
- (id)_parseCHTerminalTypeData:(id)a0;

@end
