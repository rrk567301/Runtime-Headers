@class NSObject, NSString, MPMediaLibrary, MPMediaLibraryArtwork, NSNumber, ICUserIdentity;
@protocol OS_dispatch_queue;

@interface MPMediaLibraryArtworkRequest : NSObject <MPArtworkTokenParametersRepresenting> {
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    unsigned long long _mediaType;
    BOOL _hasRetrievedTokens;
}

@property (readonly, copy, nonatomic) ICUserIdentity *userIdentity;
@property (readonly, nonatomic) MPMediaLibrary *library;
@property (readonly, nonatomic) long long artworkType;
@property (readonly, nonatomic) unsigned long long libraryID;
@property (readonly, nonatomic) long long entityType;
@property (readonly, nonatomic) MPMediaLibraryArtwork *libraryArtwork;
@property (nonatomic) double retrievalTime;
@property (readonly, nonatomic) unsigned long long mediaType;
@property (copy, nonatomic) NSString *availableArtworkToken;
@property (copy, nonatomic) NSString *fetchableArtworkToken;
@property (copy, nonatomic) NSNumber *fetchableArtworkSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)artworkTokenWithParameters:(id)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)artworkTokenParameters;
- (id)initWithLibrary:(id)a0 identifier:(unsigned long long)a1 entityType:(long long)a2 artworkType:(long long)a3;
- (id)initWithLibrary:(id)a0 identifier:(unsigned long long)a1 entityType:(long long)a2 artworkType:(long long)a3 mediaType:(unsigned long long)a4;
- (void)setLibraryArtwork:(id)a0;
- (void)clearFailedFetchableToken;
- (void)promoteFetchableArtworkTokenIfNeeded;
- (void)_onQueue_updateTokens;

@end
