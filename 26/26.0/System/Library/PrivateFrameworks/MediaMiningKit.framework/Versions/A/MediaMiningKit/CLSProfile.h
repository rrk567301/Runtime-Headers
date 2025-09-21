@class NSString;

@interface CLSProfile : NSObject

@property (readonly, copy, nonatomic) NSString *uuid;

+ (id)identifier;
+ (id)classIdentifier;
+ (id)informantDependenciesIdentifiers;
+ (id)profileDependenciesIdentifiers;
+ (id)supportedMeaningClueKeys;

- (id)init;
- (id)description;
- (id)uniqueIdentifier;
- (void).cxx_destruct;
- (void)processResultsSynchronouslyForInvestigation:(id)a0 withProgressBlock:(id /* block */)a1;

@end
