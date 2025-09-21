@class NSString;

@interface AVTAvatarPuppetRecord : NSObject <AVTAvatarRecordInternal>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *puppetName;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic, getter=isEditable) char editable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)matchingIdentifierTest:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isPuppet;
- (id)initWithPuppetName:(id)a0;

@end
