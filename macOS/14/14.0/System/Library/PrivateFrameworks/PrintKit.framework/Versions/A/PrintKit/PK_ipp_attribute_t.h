@class NSString, NSMutableArray;

@interface PK_ipp_attribute_t : NSObject <NSCopying, NSSecureCoding> {
    NSString *x_name;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSMutableArray *values;
@property (readonly) NSString *name;
@property int group_tag;
@property int value_tag;
@property (readonly) unsigned long long num_values;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)name;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)loggingDict;
- (void)enumerateValues:(id /* block */)a0;
- (void)toss_last_value;
- (id)addNewEmptyValue;
- (id)initWithName:(id)a0 group:(int)a1 value:(int)a2;
- (unsigned long long)num_values;
- (void)setNSName:(id)a0;

@end
