@class NSString;

@interface TCMPSGraphNodeHandle : NSObject <MPSHandle> {
    NSString *_label;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)handleWithLabel:(id)a0;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)label;
- (id)initWithLabel:(id)a0;

@end
