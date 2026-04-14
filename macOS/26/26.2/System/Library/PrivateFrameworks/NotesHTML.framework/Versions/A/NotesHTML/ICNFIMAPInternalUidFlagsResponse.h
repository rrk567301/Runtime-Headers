@class NSIndexSet, ICNFIMAPFlagsFetchResult;

@interface ICNFIMAPInternalUidFlagsResponse : ICNFIMAPResponse

@property (copy, nonatomic) NSIndexSet *uids;
@property (retain, nonatomic) ICNFIMAPFlagsFetchResult *flagsFetchResult;
@property (nonatomic) char flagChangeType;

- (void).cxx_destruct;
- (id)description;

@end
