@class NSString, _EARUserProfile, NSObject;
@protocol OS_dispatch_queue;

@interface RDUserProfileImpl : NSObject {
    _EARUserProfile *_userProfile;
    NSObject<OS_dispatch_queue> *gRDServerQueue;
}

@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *assetPath;

- (void).cxx_destruct;
- (id)dataProfile;
- (void)removeAllWords;
- (void)adaptUserProfileWithUserData:(id)a0;
- (void)addPhraseToUserProfileWithIPAprons:(id)a0 wordTag:(id)a1 phrase:(id)a2 pronsArray:(id)a3;
- (void)addPhraseToUserProfileWithTemplateName:(id)a0 wordTag:(id)a1 namesToProns:(id)a2;
- (void)addPhraseToUserProfileWithTemplateName:(id)a0 wordTag:(id)a1 phrase:(id)a2;
- (void)addWordsToUserProfileWithTemplateName:(id)a0 wordArrays:(id)a1;
- (id)getUserProfileData;
- (id)initWithLanguage:(id)a0 assetPath:(id)a1;
- (id)readUserProfileFromCache;
- (void)updateUserProfileWithPersonalData:(id /* block */)a0;
- (void)writeUserProfileAsJson:(id)a0;
- (id)writeUserProfileToCache;

@end
