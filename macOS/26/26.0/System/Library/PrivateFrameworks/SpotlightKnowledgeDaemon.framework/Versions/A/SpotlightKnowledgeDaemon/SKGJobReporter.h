@class NSArray, NSMutableDictionary, NSMutableSet, NSString;

@interface SKGJobReporter : NSObject {
    NSMutableDictionary *_counter;
    NSMutableDictionary *_countingPairs;
    NSMutableDictionary *_reportingPairs;
    NSMutableDictionary *_loggingPairs;
    NSMutableSet *_fetchAttributes;
    NSMutableSet *_countingAttributes;
    NSMutableSet *_reportingAttributes;
    NSMutableSet *_loggingAttributes;
    NSString *_outputRoot;
    int _verbosity;
}

@property (readonly, nonatomic) NSArray *bundles;
@property (readonly, nonatomic) NSArray *fetchAttributes;
@property (readonly, nonatomic) NSArray *countingAttributes;
@property (readonly, nonatomic) NSArray *reportingAttributes;
@property (readonly, nonatomic) NSArray *loggingAttributes;
@property (readonly, nonatomic) NSArray *queryString;

- (void)clear;
- (void).cxx_destruct;
- (id)reports;
- (void)_addValue:(id)a0 attribute:(id)a1 uniqueID:(id)a2 bundleID:(id)a3;
- (void)addAttribute:(id)a0 bundleID:(id)a1;
- (void)addFromRecord:(id)a0 bundleID:(id)a1;
- (void)enableCountingAttribute:(id)a0 message:(id)a1 processor:(id)a2;
- (void)enableLoggingAttribute:(id)a0 message:(id)a1 processor:(id)a2;
- (void)enableReportingAttribute:(id)a0 message:(id)a1 processor:(id)a2;
- (id)extractionReportForProcessor:(id)a0 bundles:(id)a1 attributes:(id)a2;
- (id)initWithVerbosity:(int)a0;
- (void)logAttribute:(id)a0 value:(id)a1 uniqueID:(id)a2 bundleID:(id)a3;
- (void)logFromRecord:(id)a0 uniqueID:(id)a1 bundleID:(id)a2;
- (id)loggingReportForProcessor:(id)a0 bundles:(id)a1 attributes:(id)a2;
- (id)pipelineReportForProcessor:(id)a0 bundles:(id)a1 attributes:(id)a2;

@end
