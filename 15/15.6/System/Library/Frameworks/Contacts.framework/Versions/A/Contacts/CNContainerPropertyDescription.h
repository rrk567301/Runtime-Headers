@class NSString;

@interface CNContainerPropertyDescription : NSObject

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, nonatomic) char isWritable;
@property (readonly, nonatomic) Class valueClass;

- (id)CNValueForContainer:(id)a0;
- (id)abcdContainerKey;
- (id)abcdContainerValueForCNValue:(id)a0;
- (char)isValidValue:(id)a0 error:(id *)a1;
- (char)isValue:(id)a0 equalToEmptyEquivalentOrValue:(id)a1;
- (id)nilValue;
- (void)setCNValue:(id)a0 onContainer:(id)a1;

@end
