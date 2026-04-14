@class NSString;

@interface MFSearchableIndexQueryResult : NSObject

@property (readonly, copy, nonatomic) NSString *persistentID;
@property (readonly, copy, nonatomic) NSString *mailMessageID;

- (void).cxx_destruct;
- (id)initWithPersistentID:(id)a0 mailMessageID:(id)a1;

@end
