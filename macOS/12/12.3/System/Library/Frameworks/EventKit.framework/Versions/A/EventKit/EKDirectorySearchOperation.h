@class NSError;

@interface EKDirectorySearchOperation : NSOperation

@property (readonly, nonatomic) BOOL numberOfMatchesExceededLimit;
@property (readonly, nonatomic) NSError *error;

+ (BOOL)isSupported;

- (id)initWithSource:(id)a0 query:(id)a1 resultsBlock:(id /* block */)a2;

@end
