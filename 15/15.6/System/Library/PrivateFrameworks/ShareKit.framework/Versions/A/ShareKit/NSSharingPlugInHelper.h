@interface NSSharingPlugInHelper : NSObject

+ (id)imageNamed:(id)a0;
+ (id)userDefaults;
+ (id)computeAlternateImageFromImage:(id)a0;
+ (void)_addParticipantEmails:(id)a0 phoneNumbers:(id)a1 asReadWrite:(char)a2 allowParticipantsToInvite:(char)a3 toShare:(id)a4 inContainer:(id)a5 completionHandler:(id /* block */)a6;
+ (void)_addParticipantEmails:(id)a0 phoneNumbers:(id)a1 asReadWrite:(char)a2 allowParticipantsToInvite:(char)a3 toShare:(id)a4 inContainer:(id)a5 withURL:(id)a6 completionHandler:(id /* block */)a7;
+ (void)_addParticipantEmails:(id)a0 phoneNumbers:(id)a1 asReadWrite:(char)a2 toShare:(id)a3 inContainer:(id)a4 completionHandler:(id /* block */)a5;
+ (void)_asyncExtractFromExtensionItem:(id)a0 wantsTextItems:(char)a1 wantsFileURLItems:(char)a2 wantsDistantURLs:(char)a3 wantsImages:(char)a4 wantsCKShareProviders:(char)a5 treatImagesAsFileURLItems:(char)a6 completionHandler:(id /* block */)a7;
+ (void)_asyncParseExtensionItem:(id)a0 wantsBodyMessage:(char)a1 wantsDistantURLs:(char)a2 wantsImages:(char)a3 includeURLsInBodyMessage:(char)a4 writeImagesAsFileURLs:(char)a5 completionHandler:(id /* block */)a6;
+ (void)_asyncParseExtensionItem:(id)a0 wantsBodyMessage:(char)a1 wantsFileURLs:(char)a2 wantsDistantURLs:(char)a3 wantsImages:(char)a4 includeURLsInBodyMessage:(char)a5 writeImagesAsFileURLs:(char)a6 completionHandler:(id /* block */)a7;
+ (void)_removeParticipants:(id)a0 fromShare:(id)a1 inContainer:(id)a2 completionHandler:(id /* block */)a3;
+ (id)_serviceBundle;
+ (id)attributedStringByTrimmingCharactersInSet:(id)a0 inAttributedString:(id)a1;
+ (void)imageAndMoviesURLForItemProvider:(id)a0 writeIfNeeded:(char)a1 allowMovies:(char)a2 allowLivePhotos:(char)a3 completionHandler:(id /* block */)a4;
+ (void)imageAndMoviesURLForItemProvider:(id)a0 writeIfNeeded:(char)a1 allowMovies:(char)a2 completionHandler:(id /* block */)a3;
+ (void)imageURLForItemProvider:(id)a0 writeIfNeeded:(char)a1 completionHandler:(id /* block */)a2;
+ (id)movieURLForShareProxyItem:(id)a0;
+ (void)parseExtensionItem:(id)a0 getBodyMessage:(id *)a1 includeURLsInBodyMessage:(char)a2 getFileURLs:(id *)a3 getDistantURLs:(id *)a4 getImages:(id *)a5 getImageCount:(long long *)a6 writeImagesAsFileURLs:(char)a7;
+ (id)plugInIdentifier;
+ (id)temporaryImageFileName;
+ (id)temporaryMovieFileName;
+ (id)writeImage:(id)a0;
+ (id)writeMovie:(id)a0;

@end
