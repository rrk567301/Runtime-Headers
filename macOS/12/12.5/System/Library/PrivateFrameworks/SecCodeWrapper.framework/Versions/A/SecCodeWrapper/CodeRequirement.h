@class NSData, NSString;

@interface CodeRequirement : NSObject {
    NSData *_data;
    NSString *_text;
}

@property (readonly) struct __SecRequirement { } *requirementRef;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)data;
- (id)initWithData:(id)a0;
- (id)stringValue;
- (void).cxx_destruct;
- (BOOL)validateCode:(id)a0 flags:(unsigned int)a1 error:(id *)a2;
- (id)initWithSecRequirementRef:(struct __SecRequirement { } *)a0;
- (id)initWithText:(id)a0 error:(id *)a1;

@end
