@class NSString, NSPropertyDescription;

@interface HMDPropertyCodingDescription : NSObject {
    NSPropertyDescription *_property;
    NSString *_codingKey;
    unsigned long long _conditions;
}

@property (readonly) NSPropertyDescription *property;
@property (readonly) NSString *name;
@property (readonly) NSString *codingKey;
@property (readonly, getter=isConditional) char conditional;
@property (readonly) NSString *shortDescription;

- (void).cxx_destruct;
- (char)shouldIncludeWithConditions:(id)a0;

@end
