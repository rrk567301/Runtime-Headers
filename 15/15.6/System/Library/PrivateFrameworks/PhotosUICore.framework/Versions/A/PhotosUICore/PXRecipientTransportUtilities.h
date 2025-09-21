@interface PXRecipientTransportUtilities : NSObject

+ (char)px_IsEmailAddress:(id)a0 equalToEmailAddress:(id)a1;
+ (char)px_IsValidEmailAddress:(id)a0;
+ (id)px_bestMessagingTransportForContact:(id)a0;
+ (long long)px_recipientKindFromString:(id)a0;
+ (id)px_validPhoneNumberFromString:(id)a0;

@end
