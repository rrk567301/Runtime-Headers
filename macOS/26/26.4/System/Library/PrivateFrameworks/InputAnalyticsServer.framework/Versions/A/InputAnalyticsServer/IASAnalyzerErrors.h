@class NSMutableSet;

@interface IASAnalyzerErrors : NSObject

@property (retain, nonatomic) NSMutableSet *errors;

+ (id)consolidatedErrorStringFromErrors:(id)a0;

- (void)clear;
- (void).cxx_destruct;
- (id)init;
- (void)logErrorCodeIfNotNil:(id)a0;
- (id)errorString;

@end
