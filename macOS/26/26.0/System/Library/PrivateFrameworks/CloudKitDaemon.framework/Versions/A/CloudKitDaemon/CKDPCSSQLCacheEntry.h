@class NSNumber, NSString, CKDPCSData;

@interface CKDPCSSQLCacheEntry : CKSQLiteCacheTableEntry

@property (retain, nonatomic) NSNumber *entryID;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSNumber *databaseScope;
@property (retain, nonatomic) NSNumber *itemType;
@property (retain, nonatomic) CKDPCSData *CKDPCSData;
@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSString *accountID;
@property (retain, nonatomic) NSString *zoneID;
@property (retain, nonatomic) NSString *shareID;
@property (retain, nonatomic) NSString *parentID;

- (void).cxx_destruct;

@end
