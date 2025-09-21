@class NSString;

@interface SGEmailAddress : SGLabeledObject

@property (readonly, nonatomic) NSString *emailAddress;

+ (char)supportsSecureCoding;
+ (id)emailAddress:(id)a0 label:(id)a1 extractionInfo:(id)a2 withRecordId:(id)a3;
+ (id)emailAddress:(id)a0 label:(id)a1 extractionType:(unsigned long long)a2 withRecordId:(id)a3;
+ (id)emailAddress:(id)a0 label:(id)a1 extractionType:(unsigned long long)a2 withRecordId:(id)a3 origin:(id)a4;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEmailAddress:(id)a0 label:(id)a1 extractionInfo:(id)a2 recordId:(id)a3;
- (char)isEqualToEmailAddress:(id)a0;

@end
