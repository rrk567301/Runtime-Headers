@class AFPeerInfo, AFAudioSessionCoordinationSystemInfo, NSString;

@interface AFAudioSessionCoordinationDeviceInfo : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) AFPeerInfo *peerInfo;
@property (readonly, copy, nonatomic) AFAudioSessionCoordinationSystemInfo *systemInfo;
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
- (id)initWithPeerInfo:(id)a0 systemInfo:(id)a1;
- (id)mutatedCopyWithMutator:(id /* block */)a0;

@end
