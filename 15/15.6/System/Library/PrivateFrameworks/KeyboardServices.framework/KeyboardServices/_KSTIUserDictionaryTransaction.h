@class _KSTIUserDictionaryEntryValue;

@interface _KSTIUserDictionaryTransaction : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _KSTIUserDictionaryEntryValue *valueToDelete;
@property (retain, nonatomic) _KSTIUserDictionaryEntryValue *valueToInsert;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
