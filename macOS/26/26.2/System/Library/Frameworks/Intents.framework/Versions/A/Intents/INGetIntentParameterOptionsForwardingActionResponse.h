@class NSData;

@interface INGetIntentParameterOptionsForwardingActionResponse : INIntentForwardingActionResponse

@property (readonly, nonatomic) NSData *archivedObjectCollection;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithArchivedObjectCollection:(id)a0 error:(id)a1;

@end
