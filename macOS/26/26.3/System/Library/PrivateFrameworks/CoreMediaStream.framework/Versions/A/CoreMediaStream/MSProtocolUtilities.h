@interface MSProtocolUtilities : NSObject

+ (id)currentOwnerCKUserID;
+ (void)fetchMPSStateWithBaseAvailabilityURL:(id)a0 personID:(id)a1 originalLibrarySize:(id)a2 completionBlock:(id /* block */)a3;
+ (void)applyUserDefaultOverridesToResponse:(id)a0;
+ (id)retryAfterDateBasedOnRetryAfterHeaderString:(id)a0;
+ (id)Win32SHA1OfUDID:(id)a0;
+ (id)deviceInfoDictForPersonID:(id)a0;
+ (id)appleIDSession;
+ (id)_urlSession;

@end
