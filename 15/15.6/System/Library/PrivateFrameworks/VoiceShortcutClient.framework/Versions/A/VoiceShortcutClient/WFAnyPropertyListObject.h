@protocol WFPropertyListObject;

@interface WFAnyPropertyListObject : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) id<WFPropertyListObject> propertyListObject;

+ (id)objectWithPropertyListObject:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPropertyListObject:(id)a0;

@end
