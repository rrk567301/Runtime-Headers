@class NSMutableSet;

@interface IASAnalyzerErrors : NSObject

@property (retain, nonatomic) NSMutableSet *errors;

+ (id)consolidatedErrorStringFromErrors:(id)a0;

- (void)clear;
- (id)init;
- (void)logErrorCodeIfNotNil:(id)a0;
- (void).cxx_destruct;
- (id)errorString;

@end
