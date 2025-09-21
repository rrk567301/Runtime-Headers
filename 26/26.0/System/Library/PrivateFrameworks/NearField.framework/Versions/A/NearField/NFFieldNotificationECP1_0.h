@interface NFFieldNotificationECP1_0 : NFFieldNotification <NSCopying>

@property (nonatomic) BOOL ignoreRFTechOnIsEqual;
@property (readonly) BOOL odaRequired;
@property (readonly) unsigned int terminalMode;
@property (readonly) unsigned int terminalType;

+ (BOOL)supportsSecureCoding;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionaryForDavenport:(id)a0;
- (void)_initCategoryWithType:(unsigned int)a0;
- (id)initWithNotificationType:(unsigned long long)a0 rfTechnology:(unsigned int)a1 typeFSystemCode:(unsigned short)a2 creationDate:(id)a3 cachedBeforeRFReset:(BOOL)a4 odaRequired:(BOOL)a5 terminalMode:(unsigned int)a6 terminalType:(unsigned int)a7 ignoreRFTechOnIsEqual:(BOOL)a8;

@end
