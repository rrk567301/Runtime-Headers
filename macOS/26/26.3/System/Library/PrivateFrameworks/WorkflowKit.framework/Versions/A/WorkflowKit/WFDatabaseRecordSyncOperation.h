@class NSString;

@interface WFDatabaseRecordSyncOperation : NSObject {
    void /* function */ reason;
}

@property (nonatomic, readonly) unsigned long long operationType;
@property (nonatomic, readonly) NSString *reason;

- (id)init;
- (void).cxx_destruct;
- (id)initWithOperationType:(unsigned long long)a0 reason:(id)a1;

@end
