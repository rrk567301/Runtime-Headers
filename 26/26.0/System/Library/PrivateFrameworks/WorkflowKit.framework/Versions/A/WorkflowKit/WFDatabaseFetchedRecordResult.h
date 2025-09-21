@class NSString;

@interface WFDatabaseFetchedRecordResult : NSObject {
    void /* function */ reason;
}

@property (nonatomic, readonly) unsigned long long resultType;
@property (nonatomic, readonly) NSString *reason;

- (id)init;
- (void).cxx_destruct;
- (id)initWithResultType:(unsigned long long)a0 reason:(id)a1;

@end
