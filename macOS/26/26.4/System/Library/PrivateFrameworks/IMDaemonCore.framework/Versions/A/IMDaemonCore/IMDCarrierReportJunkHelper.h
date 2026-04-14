@interface IMDCarrierReportJunkHelper : NSObject

+ (id)fetchMMSReportJunkCarrierAddressForPhoneNumber:(id)a0 simID:(id)a1;
+ (id)fetchSMSReportJunkCarrierAddressForPhoneNumber:(id)a0 simID:(id)a1;
+ (BOOL)validateReportJunkCarrierAddress:(id)a0;
+ (id)_createJunkReportMessageItemBodyForMessageItem:(id)a0 junkChatStyle:(unsigned char)a1 serviceName:(id)a2;
+ (id)createJunkReportMessageBodyTextForMessageItem:(id)a0 junkChatStyle:(unsigned char)a1 serviceName:(id)a2;
+ (id)jsonSerializeDictionary:(id)a0;
+ (id)jsonSerializeDictionaryStrippingOutMessageContent:(id)a0;
+ (id)junkReportMessageItemForMessageItem:(id)a0 account:(id)a1 junkChatStyle:(unsigned char)a2 serviceName:(id)a3;
+ (id)receiveDateForMessageItem:(id)a0;
+ (void)setHandleParametersOfMessageItem:(id)a0 usingAccount:(id)a1 usingMessageItem:(id)a2 junkChatStyle:(unsigned char)a3;
+ (BOOL)supportsReportJunkForMessage:(id)a0 chatStyle:(unsigned char)a1;

@end
