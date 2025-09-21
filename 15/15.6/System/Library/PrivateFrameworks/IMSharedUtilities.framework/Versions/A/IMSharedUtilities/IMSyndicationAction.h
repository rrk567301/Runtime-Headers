@class NSString, NSDate;

@interface IMSyndicationAction : NSObject <NSSecureCoding, NSCopying, IMRemoteObjectCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned char version;
@property (readonly, nonatomic) unsigned char syndicatedItemType;
@property (readonly, nonatomic) unsigned char syndicationActionType;
@property (readonly, nonatomic) NSDate *syndicationStartDate;
@property (readonly, copy, nonatomic) NSString *chatGUID;

+ (id)dateFromNanoSeconds:(id)a0;
+ (id)nanoSecondsFromDate:(id)a0;
+ (id)unarchiveClasses;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithIMRemoteObjectSerializedDictionary:(id)a0;
- (id)initWithIMRemoteObjectSerializedDictionary:(id)a0;
- (id)_stringFromActionType:(unsigned char)a0;
- (id)_stringFromItemType:(unsigned char)a0;
- (id)copyDictionaryRepresentation;
- (id)initWithChatGUID:(id)a0 syndicationStartDate:(id)a1 syndicationActionType:(unsigned char)a2;

@end
