@class NSData, NSString, NSDate;

@interface AVTAvatarRecord : NSObject <AVTAvatarRecordInternal, AVTAvatarRecord>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSData *avatarData;
@property (readonly, nonatomic) NSDate *orderDate;
@property (readonly, nonatomic, getter=isPuppet) char puppet;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic, getter=isEditable) char editable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)canLoadAvatarWithData:(id)a0;
+ (id)defaultAvatarRecord;
+ (id)dataForNeutralRecord;
+ (id)dataForNewRecord;
+ (id /* block */)matchingIdentifierTest:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithAvatarData:(id)a0;
- (id)initWithAvatarData:(id)a0 identifier:(id)a1 orderDate:(id)a2;
- (id)initWithAvatarData:(id)a0 orderDate:(id)a1;

@end
