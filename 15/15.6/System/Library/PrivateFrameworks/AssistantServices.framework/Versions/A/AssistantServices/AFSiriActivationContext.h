@class NSString, NSDictionary;

@interface AFSiriActivationContext : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) long long source;
@property (readonly, nonatomic) long long event;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, copy, nonatomic) NSString *deviceID;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;
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
- (id)initWithTimestamp:(unsigned long long)a0 source:(long long)a1 event:(long long)a2 options:(unsigned long long)a3 deviceID:(id)a4 userInfo:(id)a5;
- (id)mutatedCopyWithMutator:(id /* block */)a0;

@end
