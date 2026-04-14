@class NSError;

@interface AFSetAudioSessionActiveResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int audioSessionID;
@property (readonly, copy, nonatomic) NSError *error;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithAudioSessionID:(unsigned int)a0 error:(id)a1;
- (id)mutatedCopyWithMutator:(id /* block */)a0;

@end
