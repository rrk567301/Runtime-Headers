@class NSData, NSString;

@interface CodeRequirement : NSObject {
    NSData *_data;
    NSString *_text;
}

@property (readonly) struct __SecRequirement { } *requirementRef;

- (id)stringValue;
- (id)initWithData:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)data;
- (id)description;
- (void)dealloc;
- (BOOL)validateCode:(id)a0 flags:(unsigned int)a1 error:(id *)a2;
- (id)initWithSecRequirementRef:(struct __SecRequirement { } *)a0;
- (id)initWithText:(id)a0 error:(id *)a1;

@end
