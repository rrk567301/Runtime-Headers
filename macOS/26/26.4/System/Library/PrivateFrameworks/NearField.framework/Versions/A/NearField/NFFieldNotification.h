@class NSData, NSDate;

@interface NFFieldNotification : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSData *vasData;
@property (nonatomic) BOOL cachedBeforeRFReset;
@property (nonatomic) long long category;
@property (nonatomic) unsigned short rawDetectionInfo;
@property (readonly) unsigned long long notificationType;
@property (readonly) unsigned int rfTechnology;
@property (readonly) unsigned short typeFSystemCode;

+ (id)notificationWithDictionary:(id)a0;
+ (id)fieldNotificationFromXPCObject:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)setNotificationType:(unsigned long long)a0;
- (id)_creationDateString;
- (id)asXPCObject;
- (unsigned long long)chFieldType;
- (id)chRandomData;
- (id)initWithNotificationType:(unsigned long long)a0 rfTechnology:(unsigned int)a1 typeFSystemCode:(unsigned short)a2 rawDetectionInfo:(unsigned short)a3 vasData:(id)a4 creationDate:(id)a5 cachedBeforeRFReset:(BOOL)a6;
- (BOOL)isCHAutoNegotiationField;
- (BOOL)isCHInitiatorDetected;
- (BOOL)isCHReceiverDetected;
- (BOOL)isCHTerminal;
- (BOOL)isEqualTerminalInfo:(id)a0;
- (BOOL)isEqualWithoutRFTech:(id)a0;

@end
