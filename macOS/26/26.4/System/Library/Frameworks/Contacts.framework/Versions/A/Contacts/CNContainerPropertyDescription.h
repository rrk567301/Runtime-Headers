@class NSString;

@interface CNContainerPropertyDescription : NSObject

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, nonatomic) BOOL isWritable;
@property (readonly, nonatomic) Class valueClass;

- (id)nilValue;
- (id)CNValueForContainer:(id)a0;
- (id)abcdContainerKey;
- (id)abcdContainerValueForCNValue:(id)a0;
- (BOOL)isValidValue:(id)a0 error:(id *)a1;
- (BOOL)isValue:(id)a0 equalToEmptyEquivalentOrValue:(id)a1;
- (void)setCNValue:(id)a0 onContainer:(id)a1;

@end
