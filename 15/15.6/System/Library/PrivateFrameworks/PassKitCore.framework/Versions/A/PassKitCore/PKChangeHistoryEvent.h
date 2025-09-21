@class NSString, NSDate;

@interface PKChangeHistoryEvent : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) long long type;
@property (nonatomic) long long recordType;
@property (retain, nonatomic) NSString *recordUniqueID;
@property (retain, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) char representsPassAddition;
@property (readonly, nonatomic) char representsPassUpdate;
@property (readonly, nonatomic) char representsPassRemoval;
@property (readonly, nonatomic) char representsCatalogUpdate;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 recordType:(long long)a1 recordUniqueID:(id)a2 timestamp:(id)a3;

@end
