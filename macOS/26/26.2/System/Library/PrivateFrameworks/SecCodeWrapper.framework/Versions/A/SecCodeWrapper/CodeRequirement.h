@class NSData, NSString;

@interface CodeRequirement : NSObject {
    NSData *_data;
    NSString *_text;
}

@property (readonly) struct __SecRequirement { } *requirementRef;

- (id)initWithData:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)stringValue;
- (id)init;
- (id)data;
- (void)dealloc;
- (BOOL)validateCode:(id)a0 flags:(unsigned int)a1 error:(id *)a2;
- (id)initWithSecRequirementRef:(struct __SecRequirement { } *)a0;
- (id)initWithText:(id)a0 error:(id *)a1;

@end
