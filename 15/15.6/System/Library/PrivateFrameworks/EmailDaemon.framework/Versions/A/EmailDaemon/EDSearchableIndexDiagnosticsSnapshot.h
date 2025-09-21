@class NSNumber, NSDictionary, NSDate;

@interface EDSearchableIndexDiagnosticsSnapshot : NSObject

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSNumber *indexableMessages;
@property (readonly, nonatomic) NSNumber *messagesIndexed;
@property (readonly, nonatomic) NSNumber *messagesToRedonate;
@property (readonly, nonatomic) char turboMode;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithDate:(id)a0 indexableMessages:(id)a1 messagesIndexed:(id)a2 messagesToRedonate:(id)a3 turboMode:(char)a4;

@end
