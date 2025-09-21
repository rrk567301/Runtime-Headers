@class NSString;

@interface AFDeviceContextHistoryConfiguration : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char keepsHistory;
@property (readonly, nonatomic) unsigned long long historyBufferSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)buildDictionaryRepresentation;
- (id)initWithKeepsHistory:(char)a0 historyBufferSize:(unsigned long long)a1;
- (id)mutatedCopyWithMutator:(id /* block */)a0;

@end
