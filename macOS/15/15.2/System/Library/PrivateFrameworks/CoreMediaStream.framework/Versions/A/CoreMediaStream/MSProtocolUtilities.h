@interface MSProtocolUtilities : NSObject

+ (id)_urlSession;
+ (id)appleIDSession;
+ (id)Win32SHA1OfUDID:(id)a0;
+ (void)applyUserDefaultOverridesToResponse:(id)a0;
+ (id)currentOwnerCKUserID;
+ (id)deviceInfoDictForPersonID:(id)a0;
+ (void)fetchMPSStateWithBaseAvailabilityURL:(id)a0 personID:(id)a1 originalLibrarySize:(id)a2 completionBlock:(id /* block */)a3;
+ (id)retryAfterDateBasedOnRetryAfterHeaderString:(id)a0;

@end
