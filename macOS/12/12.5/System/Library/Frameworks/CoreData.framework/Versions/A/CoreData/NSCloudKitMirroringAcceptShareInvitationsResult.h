@class NSArray;

@interface NSCloudKitMirroringAcceptShareInvitationsResult : NSCloudKitMirroringResult

@property (retain, nonatomic) NSArray *acceptedShares;
@property (retain, nonatomic) NSArray *acceptedShareMetadatas;

- (void)dealloc;
- (id)initWithRequest:(id)a0 acceptedShares:(id)a1 acceptedShareMetadatas:(id)a2 error:(id)a3;

@end
