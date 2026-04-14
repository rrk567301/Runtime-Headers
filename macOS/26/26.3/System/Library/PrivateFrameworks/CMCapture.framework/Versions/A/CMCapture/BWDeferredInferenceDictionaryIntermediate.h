@class NSString;

@interface BWDeferredInferenceDictionaryIntermediate : BWDeferredDictionaryIntermediate

@property (readonly, nonatomic) NSString *inferenceAttachmentKey;
@property (readonly, nonatomic) NSString *portType;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 tag:(id)a1 inferenceAttachmentKey:(id)a2 portType:(id)a3 URL:(id)a4;

@end
