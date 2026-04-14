@class NSArray;
@protocol AXSSLiveSpeechPhraseManagerDelegate;

@interface AXSSLiveSpeechPhraseManager : NSObject

@property (retain, nonatomic) id favoritePhraseObserverToken;
@property (weak, nonatomic) id<AXSSLiveSpeechPhraseManagerDelegate> delegate;
@property (retain, nonatomic) NSArray *savedPhrases;

- (void)dealloc;
- (void)startObservingChanges;
- (void).cxx_destruct;
- (id)init;
- (void)_addSavedPhrase:(id)a0;
- (void)_removeSavedPhrase:(id)a0;

@end
