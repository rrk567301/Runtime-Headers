@class NSDateComponents;

@interface SGDateComponents : SGLabeledObject

@property (readonly, nonatomic) NSDateComponents *dateComponents;

+ (char)supportsSecureCoding;
+ (id)dateComponents:(id)a0 label:(id)a1 extractionInfo:(id)a2 withRecordId:(id)a3;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dateString;
- (id)initWithDateComponents:(id)a0 label:(id)a1 extractionInfo:(id)a2 recordId:(id)a3;
- (char)isEqualToDateComponents:(id)a0;

@end
