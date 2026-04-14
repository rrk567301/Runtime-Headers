@class NSData;

@interface IDSTransactionLogDataMessage : IDSTransactionLogMessage

@property (readonly, nonatomic) NSData *dataValue;

- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithData:(id)a0 accountUniqueID:(id)a1 fromID:(id)a2 loginID:(id)a3 serviceName:(id)a4;

@end
