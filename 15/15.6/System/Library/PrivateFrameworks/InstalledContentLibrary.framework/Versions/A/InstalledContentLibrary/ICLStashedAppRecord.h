@class NSDate;

@interface ICLStashedAppRecord : ICLAppRecord <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSDate *stashedAtTimestamp;
@property (copy, nonatomic) NSDate *stashOriginalInstallTimestamp;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLegacyRecordDictionary:(id)a0;
- (id)legacyRecordDictionary;

@end
