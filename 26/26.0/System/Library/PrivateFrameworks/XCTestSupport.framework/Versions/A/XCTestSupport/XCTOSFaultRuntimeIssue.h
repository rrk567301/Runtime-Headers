@class NSString, XCTBacktrace;

@interface XCTOSFaultRuntimeIssue : NSObject <XCTRuntimeIssue>

@property (class, readonly) NSString *capability;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) XCTBacktrace *runtimeIssueBacktrace;
@property (readonly, copy) NSString *message;
@property (readonly) NSString *shortDescription;
@property (readonly) NSString *detailedDescription;
@property (readonly) XCTBacktrace *backtrace;
@property (readonly) unsigned long long aggregationHash;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0 backtrace:(id)a1;
- (BOOL)isEqualForAggregationWith:(id)a0;

@end
