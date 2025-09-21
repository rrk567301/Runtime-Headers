@class NSString, NSData, NSDate;

@interface _KSTextReplacementEntry : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSData *cloudData;
@property char needsSaveToCloud;
@property char wasDeleted;
@property (copy, nonatomic) NSString *phrase;
@property (copy, nonatomic) NSString *shortcut;
@property (copy, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSString *cloudID;
@property (retain, nonatomic) _KSTextReplacementEntry *priorValue;

+ (id)localEntryFromCloudEntry:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)uniqueID;
- (char)isEquivalentTo:(id)a0;
- (id)encryptedFields;
- (id)unEncryptedFields;
- (id)uniqueRecordName;
- (id)uniqueRecordNameVer0;

@end
