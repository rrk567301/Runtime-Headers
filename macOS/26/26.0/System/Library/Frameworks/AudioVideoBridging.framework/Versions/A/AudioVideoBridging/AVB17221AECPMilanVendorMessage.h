@class NSData;

@interface AVB17221AECPMilanVendorMessage : AVB17221AECPVendorMessage

@property (nonatomic) unsigned short commandType;
@property (copy, nonatomic) NSData *commandSpecificData;

+ (id)responseMessage;
+ (id)commandMessage;
+ (id)commandMessageForCommandType:(unsigned short)a0;
+ (id)commandMessageForProtocolSpecificData:(id)a0;
+ (id)keyPathsForValuesAffectingCommandSpecificData;
+ (id)keyPathsForValuesAffectingCommandType;
+ (id)responseMessageForCommandMessage:(id)a0;
+ (id)responseMessageForCommandType:(unsigned short)a0;
+ (id)responseMessageForProtocolSpecificData:(id)a0;

- (void)setCommandType:(unsigned short)a0;
- (unsigned short)commandType;
- (id)init;
- (void)_makeItMutableWithMinimumSize:(unsigned long long)a0;
- (id)commandSpecificData;
- (void)setCommandSpecificData:(id)a0;

@end
