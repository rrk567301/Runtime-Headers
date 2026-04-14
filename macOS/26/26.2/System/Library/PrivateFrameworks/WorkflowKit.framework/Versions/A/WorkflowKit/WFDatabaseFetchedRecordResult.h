@class NSString;

@interface WFDatabaseFetchedRecordResult : NSObject {
    void /* function */ reason;
}

@property (nonatomic, readonly) unsigned long long resultType;
@property (nonatomic, readonly) NSString *reason;

- (void).cxx_destruct;
- (id)init;
- (id)initWithResultType:(unsigned long long)a0 reason:(id)a1;

@end
