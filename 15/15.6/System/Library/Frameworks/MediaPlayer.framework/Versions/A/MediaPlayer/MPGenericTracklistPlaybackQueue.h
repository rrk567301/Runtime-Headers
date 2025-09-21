@class NSString, NSArray, MPIdentifierSet;

@interface MPGenericTracklistPlaybackQueue : MPRemotePlaybackQueue

@property (readonly, nonatomic) NSString *firstTrackIdentifier;
@property (readonly, nonatomic) NSArray *trackIdentifiers;
@property (readonly, nonatomic) MPIdentifierSet *collectionIdentifierSet;
@property (readonly, nonatomic) long long shuffleType;
@property (readonly, nonatomic) long long repeatType;

+ (char)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue { } *)a0 options:(id)a1;
- (char)verifyWithError:(id *)a0;

@end
