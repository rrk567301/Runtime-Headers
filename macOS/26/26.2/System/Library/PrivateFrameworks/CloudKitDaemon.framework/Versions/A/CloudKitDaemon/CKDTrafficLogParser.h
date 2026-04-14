@interface CKDTrafficLogParser : NSObject {
    void /* unknown type, empty encoding */ lock;
}

- (void).cxx_destruct;
- (id)init;
- (id)consumeParsedTrafficLogsAndReturnError:(id *)a0;
- (BOOL)parse:(id)a0 error:(id *)a1;

@end
