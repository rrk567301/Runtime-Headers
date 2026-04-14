@interface SNDistanceClassifier : NSObject

+ (id)createRequestWithError:(id *)a0;
+ (id)modelURLForCurrentProduct;
+ (id)modelURLForProductType:(int)a0 acousticID:(id)a1 withFileExistenceCheck:(BOOL)a2;

- (id)init;

@end
