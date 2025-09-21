@interface IMUnknownSenderHelper : NSObject

+ (id)mapID:(id)a0 usingKey:(id)a1;
+ (char)accountCountryIsCandidateForInternationalFiltering:(id)a0;
+ (char)accountRegionIsCandidateForInternationalFiltering:(id)a0;
+ (char)receiverIsCandidateForInternationalFiltering:(id)a0;
+ (char)receivingID:(id)a0 isCountryCode:(id)a1;
+ (char)shouldShowInternationalSenderWarningForHandleID:(id)a0;

@end
