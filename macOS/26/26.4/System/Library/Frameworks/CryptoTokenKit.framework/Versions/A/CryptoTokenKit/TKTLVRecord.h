@class NSData;

@interface TKTLVRecord : NSObject

@property (readonly, nonatomic) unsigned long long tag;
@property (readonly, nonatomic) NSData *value;
@property (readonly, nonatomic) NSData *data;

+ (id)recordFromData:(id)a0;
+ (id)parseFromDataSource:(id)a0;
+ (id)parseFromDataSource:(id)a0 nestingLevel:(unsigned long long)a1;
+ (id)sequenceOfRecordsFromData:(id)a0 nestingLevel:(unsigned long long)a1;
+ (id)sequenceOfRecordsFromData:(id)a0;

- (void).cxx_destruct;
- (id)initWithTag:(unsigned long long)a0 value:(id)a1 data:(id)a2;
- (id)description;

@end
