@class NSString, SASSpeechRecognized;

@interface AFSpeechInfo : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) SASSpeechRecognized *speechRecognizedCommand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)buildDictionaryRepresentation;
- (id)initWithSpeechRecognizedCommand:(id)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;

@end
