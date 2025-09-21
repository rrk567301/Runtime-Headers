@class NSArray, CKServerChangeToken, NSError;

@interface FCCKPrivateFetchDatabaseChangesSingleDestinationResult : NSObject

@property (nonatomic) long long destination;
@property (retain, nonatomic) NSArray *changedZoneIDs;
@property (retain, nonatomic) NSArray *deletedZoneIDs;
@property (retain, nonatomic) CKServerChangeToken *serverChangeToken;
@property (nonatomic) char moreComing;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
