@class NSArray, CNFuture;

@interface CNUICoreContactTypeAssessor : NSObject

@property (class, readonly, nonatomic) NSArray *keysToFetch;

@property (readonly, nonatomic) CNFuture *familyInfoFuture;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFamilyInfo:(id)a0;
- (id)initWithFamilyInfoFuture:(id)a0;
- (long long)estiamtedTypeOfContact:(id)a0;

@end
