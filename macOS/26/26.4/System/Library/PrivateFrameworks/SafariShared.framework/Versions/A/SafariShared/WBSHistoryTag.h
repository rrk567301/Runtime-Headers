@class NSString;

@interface WBSHistoryTag : NSObject

@property (readonly, nonatomic) long long databaseID;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) double modificationTimestamp;
@property (readonly, nonatomic) long long level;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithTitle:(id)a0 identifier:(id)a1 databaseID:(long long)a2 modificationTimestamp:(double)a3 level:(long long)a4;

@end
