@class NSString, NSArray, NSMutableSet;

@interface PKContactPickerItem : NSObject <NSSecureCoding> {
    NSMutableSet *_acceptedValues;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *submissionValue;
@property (readonly, nonatomic) NSArray *alternativeAcceptedValues;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)acceptedValues;
- (char)isValueAccepted:(id)a0;

@end
