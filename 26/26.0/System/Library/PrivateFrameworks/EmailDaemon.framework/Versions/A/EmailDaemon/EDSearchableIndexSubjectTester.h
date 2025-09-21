@class NSArray, NSString;

@interface EDSearchableIndexSubjectTester : NSObject <EDSearchableIndexTesting>

@property (readonly, copy, nonatomic) NSArray *fetchAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)transformDataForVerification:(id)a0;
- (id)expressionFromDataSamples:(id)a0;
- (BOOL)verifySearchableItem:(id)a0 matchesDataSample:(id)a1;

@end
