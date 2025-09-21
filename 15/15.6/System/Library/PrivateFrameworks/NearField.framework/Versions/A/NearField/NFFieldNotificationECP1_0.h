@interface NFFieldNotificationECP1_0 : NFFieldNotification <NSCopying>

@property (nonatomic) BOOL ignoreRFTechOnIsEqual;
@property (readonly) char odaRequired;
@property (readonly) unsigned int terminalMode;
@property (readonly) unsigned int terminalType;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithDictionaryForDavenport:(id)a0;
- (void)_initCategoryWithType:(unsigned int)a0;
- (id)initWithNotificationType:(unsigned long long)a0 rfTechnology:(unsigned int)a1 typeFSystemCode:(unsigned short)a2 creationDate:(id)a3 cachedBeforeRFReset:(BOOL)a4 odaRequired:(char)a5 terminalMode:(unsigned int)a6 terminalType:(unsigned int)a7 ignoreRFTechOnIsEqual:(BOOL)a8;

@end
