@interface IMCarrierReportJunkHelper : NSObject

+ (BOOL)canReportJunkOverCellularServiceOfMessageItem:(id)a0;
+ (id)fetchMMSReportJunkCarrierAddressForPhoneNumber:(id)a0 simID:(id)a1;
+ (id)fetchSMSReportJunkCarrierAddressForPhoneNumber:(id)a0 simID:(id)a1;
+ (BOOL)isReportJunkServiceAllowedForMessageItem:(id)a0 junkChatStyle:(unsigned char)a1;
+ (id)reportJunkCarrierAddressForMessageItem:(id)a0 junkChatStyle:(unsigned char)a1;
+ (BOOL)userInHomeCountryWithDestinationCallerID:(id)a0;
+ (BOOL)validateReportJunkCarrierAddress:(id)a0;
+ (BOOL)wifiCallingEnabledForDestinationCallerID:(id)a0;

@end
