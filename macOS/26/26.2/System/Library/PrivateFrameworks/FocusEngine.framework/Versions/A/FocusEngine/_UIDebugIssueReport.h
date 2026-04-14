@class NSArray, NSString, NSMutableArray;

@interface _UIDebugIssueReport : NSObject <_UIDebugIssueReporting> {
    NSMutableArray *_mutableIssues;
}

@property (readonly, copy, nonatomic) NSArray *issues;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)addIssue:(id)a0;

@end
