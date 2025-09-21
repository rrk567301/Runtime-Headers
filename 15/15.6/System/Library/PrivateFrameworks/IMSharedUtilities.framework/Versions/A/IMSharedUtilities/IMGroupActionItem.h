@class NSString;

@interface IMGroupActionItem : IMItem <NSSecureCoding, NSCopying, IMRemoteObjectCoding, IMItemErrorProtocol>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long actionType;
@property (retain, nonatomic) NSString *otherHandle;
@property (retain, nonatomic) NSString *otherUnformattedID;
@property (retain, nonatomic) NSString *otherCountryCode;
@property (nonatomic) unsigned int errorCode;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (char)actionIsGroupPhoto;
- (id)copyDictionaryRepresentation;
- (id)fileTransferGUIDs;
- (char)isCompatibleWithMiC;

@end
