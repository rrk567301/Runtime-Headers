@class NSString, NSArray, MPIdentifierSet;

@interface MPGenericTracklistPlaybackQueue : MPRemotePlaybackQueue

@property (readonly, nonatomic) NSString *firstTrackIdentifier;
@property (readonly, nonatomic) NSArray *trackIdentifiers;
@property (readonly, nonatomic) MPIdentifierSet *collectionIdentifierSet;
@property (readonly, nonatomic) long long shuffleType;
@property (readonly, nonatomic) long long repeatType;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)verifyWithError:(id *)a0;
- (id)description;
- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue { } *)a0 options:(id)a1;

@end
