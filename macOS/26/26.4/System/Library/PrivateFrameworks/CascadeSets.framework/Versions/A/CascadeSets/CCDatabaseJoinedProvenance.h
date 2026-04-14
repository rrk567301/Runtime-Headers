@class NSNumber, NSData;

@interface CCDatabaseJoinedProvenance : NSObject

@property (readonly, nonatomic) NSNumber *contentHash;
@property (readonly, nonatomic) NSNumber *contentSequenceNumber;
@property (readonly, nonatomic) unsigned char contentState;
@property (readonly, nonatomic) NSData *contentData;
@property (readonly, nonatomic) NSNumber *sourceItemIdHash;
@property (readonly, nonatomic) NSNumber *instanceHash;
@property (readonly, nonatomic) NSNumber *metaContentSequenceNumber;
@property (readonly, nonatomic) unsigned char metaContentState;
@property (readonly, nonatomic) NSData *metaContentData;
@property (readonly, nonatomic) NSNumber *deviceRowId;

+ (id)joinedProvenanceFromDatabaseValueRow:(id)a0;

- (void).cxx_destruct;
- (BOOL)hasContentInformation;
- (BOOL)hasMetaContentInformation;
- (id)initWithContentHash:(id)a0 contentSequenceNumber:(id)a1 contentDeletedRunLength:(id)a2 contentData:(id)a3 sourceItemIdHash:(id)a4 instanceHash:(id)a5 metaContentSequenceNumber:(id)a6 metaContentDeletedRunLength:(id)a7 metaContentData:(id)a8 deviceRowId:(id)a9;

@end
