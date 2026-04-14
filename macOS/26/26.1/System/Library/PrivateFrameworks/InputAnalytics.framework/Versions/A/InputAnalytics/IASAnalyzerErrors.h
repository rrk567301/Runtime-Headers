@class NSMutableSet;

@interface IASAnalyzerErrors : NSObject

@property (retain, nonatomic) NSMutableSet *errors;

+ (id)consolidatedErrorStringFromErrors:(id)a0;

- (void)clear;
- (void)logErrorCodeIfNotNil:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)errorString;

@end
