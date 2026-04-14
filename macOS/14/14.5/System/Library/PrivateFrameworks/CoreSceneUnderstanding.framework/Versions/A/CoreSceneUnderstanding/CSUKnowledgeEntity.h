@class NSDictionary, NSString, NSSet;

@interface CSUKnowledgeEntity : NSObject

@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) NSString *QID;
@property (readonly, nonatomic) NSString *humanReadableLabel;
@property (readonly, nonatomic) NSSet *humanReadableSynonyms;
@property (readonly, nonatomic) int version;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithQID:(id)a0 withHumanReadableLabel:(id)a1 withHumanReadableSynonyms:(id)a2 withVersion:(int)a3;

@end
