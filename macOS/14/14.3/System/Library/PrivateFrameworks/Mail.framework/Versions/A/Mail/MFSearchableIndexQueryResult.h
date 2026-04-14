@class NSString, NSDictionary;

@interface MFSearchableIndexQueryResult : NSObject

@property (readonly, copy, nonatomic) NSString *persistentID;
@property (readonly, copy, nonatomic) NSString *mailMessageID;
@property (copy, nonatomic) NSDictionary *snippetHints;

- (void).cxx_destruct;
- (id)initWithPersistentID:(id)a0 mailMessageID:(id)a1 snippetHints:(id)a2;

@end
