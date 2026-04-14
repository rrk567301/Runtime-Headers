@interface NFFieldNotificationECP1_0 : NFFieldNotification

@property (readonly) BOOL odaRequired;
@property (readonly) unsigned int terminalMode;
@property (readonly) unsigned int terminalType;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithDictionaryForDavenport:(id)a0;

@end
