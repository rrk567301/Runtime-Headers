@class NSString, NSNumber;

@interface STTimer : STSiriModelObject

@property (copy, nonatomic) NSString *timerId;
@property (nonatomic) long long state;
@property (copy, nonatomic) NSNumber *value;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
