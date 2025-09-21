@interface NFTechnologyEvent : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned int technology;
@property (readonly, nonatomic) unsigned char valueAddedServiceMode;
@property (readonly, nonatomic) unsigned short systemCode;
@property (readonly, nonatomic) char vasSupported;
@property (readonly, nonatomic) char touchIDRequired;
@property (readonly, nonatomic) unsigned int terminalType;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithFieldNotification:(id)a0;
- (id)initWithTechnology:(unsigned int)a0 andValueAddedServiceMode:(unsigned int)a1;
- (id)initWithTechnology:(unsigned int)a0 andValueAddedServiceMode:(unsigned int)a1 andSystemCode:(unsigned short)a2;

@end
