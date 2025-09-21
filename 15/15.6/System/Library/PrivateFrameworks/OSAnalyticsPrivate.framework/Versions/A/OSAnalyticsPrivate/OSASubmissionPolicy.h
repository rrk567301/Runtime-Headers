@class NSMutableDictionary, NSDictionary, NSArray, NSMutableSet, NSString;

@interface OSASubmissionPolicy : NSObject {
    NSArray *_default_template;
    NSArray *_primary_template;
    NSMutableSet *_allowOptOutByRouting;
    NSArray *_specific_files;
    NSString *_identifier;
    NSDictionary *_prefaces;
    NSMutableDictionary *_results;
}

@property char ignoreProxies;
@property (readonly) char hasTasking;
@property (readonly) NSDictionary *latestResults;
@property (readonly) NSMutableDictionary *scanOptions;

- (id)init;
- (void).cxx_destruct;
- (void)persist;
- (id)_loadPreviousResults;
- (id)buildSubmissionTemplateForConfig:(id)a0;
- (id)initWithTemplate:(id)a0 options:(id)a1;
- (void)registerRouting:(id)a0 result:(char)a1;
- (id)shouldSubmitRouting:(id)a0;

@end
