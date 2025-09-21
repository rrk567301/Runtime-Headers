@class NSString;

@interface SCWRecordFieldSchema : NSObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) Class valueClass;
@property (nonatomic, getter=isRequired) char required;
@property (readonly, nonatomic, getter=isEncrypted) char encrypted;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 valueClass:(Class)a1 required:(char)a2 encrypted:(char)a3;
- (char)isValidRecord:(id)a0;

@end
