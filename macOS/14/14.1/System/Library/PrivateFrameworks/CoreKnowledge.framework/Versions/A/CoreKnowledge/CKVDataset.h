@class NSNumber, NSString;

@interface CKVDataset : NSObject

@property (readonly, nonatomic) NSNumber *identifier;
@property (readonly, nonatomic) NSString *userId;
@property (readonly, nonatomic) NSString *originAppId;
@property (readonly, nonatomic) unsigned short itemType;

+ (id)_datasetIdentifierFrom:(id)a0 originAppId:(id)a1 itemType:(unsigned short)a2;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)changePublisher;
- (id)getItemTypeNumber;
- (id)initWithUserId:(id)a0 originAppId:(id)a1 itemType:(unsigned short)a2;
- (BOOL)isEqualToDataset:(id)a0;

@end
