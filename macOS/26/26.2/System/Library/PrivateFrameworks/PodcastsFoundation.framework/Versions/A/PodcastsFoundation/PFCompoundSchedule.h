@interface PFCompoundSchedule : NSObject <PFOperationSchedule> {
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ children;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithType:(long long)a0 children:(id)a1;
- (BOOL)shouldExecuteOn:(id)a0 previousExecution:(id)a1;

@end
