@class NSDictionary, NSString;

@interface ECTagValueList : NSObject {
    struct EFAtomicObject { _Atomic long long cfObject; } _stringRepresentation;
}

@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSString *stringRepresentation;

+ (id)tagValueListFromDictionary:(id)a0 error:(id *)a1;
+ (id)tagValueListFromString:(id)a0 error:(id *)a1;

- (id)objectForKeyedSubscript:(id)a0;
- (void)dealloc;
- (id)_initWithDictionaryRepresentation:(id)a0;
- (void).cxx_destruct;
- (id)valueForTag:(id)a0;
- (id)_initWithDictionaryRepresentation:(id)a0 stringRepresentation:(id)a1;

@end
