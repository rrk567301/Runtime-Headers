@class NSString, MPModelGenericObject, MPCPlayerSessionResponse, NSIndexPath;

@interface MPCPlayerSessionResponseItem : NSObject

@property (readonly, weak, nonatomic) MPCPlayerSessionResponse *response;
@property (readonly, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic) NSString *contentItemIdentifier;
@property (readonly, nonatomic) MPModelGenericObject *metadataObject;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)remove;
- (id)play;
- (id)initWithModelGenericObject:(id)a0 indexPath:(id)a1 response:(id)a2;
- (id)playOnPlayerPath:(id)a0;

@end
