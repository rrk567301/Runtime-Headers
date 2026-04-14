@interface CalConferenceURLDetector : NSObject

+ (id)logHandle;
+ (id)googleMeetURLsAndPhoneNumbersFromSource:(id)a0;
+ (id)_URLsInSource:(id)a0;
+ (BOOL)isPreferredURL:(id)a0;
+ (BOOL)_isValidTelURL:(id)a0;
+ (id)_firstPhoneNumberInSource:(id)a0;
+ (id)_linksInSource:(id)a0;
+ (BOOL)_isGoogleMeetURL:(id)a0;
+ (id)_dataDetector;
+ (id)_URLDataDetector;
+ (id)_phoneNumberDataDetector;
+ (BOOL)_hasDisallowedPathExtension:(id)a0;
+ (BOOL)_hasValidPath:(id)a0;
+ (id)_preferredHostSuffixes;
+ (BOOL)isTUConversationLink:(id)a0;
+ (id)_googleMeetSuffix;
+ (id)conferenceURLFromSources:(id)a0;

@end
