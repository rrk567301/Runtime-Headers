@class NSIndexSet, IMAPFlagsFetchResult;

@interface IMAPInternalUidFlagsResponse : IMAPResponse

@property (copy, nonatomic) NSIndexSet *uids;
@property (retain, nonatomic) IMAPFlagsFetchResult *flagsFetchResult;
@property (nonatomic) char flagChangeType;

- (void).cxx_destruct;
- (id)description;

@end
