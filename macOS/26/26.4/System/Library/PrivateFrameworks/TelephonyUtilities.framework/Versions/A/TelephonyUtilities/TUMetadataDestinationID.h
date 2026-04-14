@class NSString, TUHandle;

@interface TUMetadataDestinationID : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TUHandle *handle;
@property (readonly, copy, nonatomic) NSString *isoCountryCode;

+ (id)metadataDestinationIDForCall:(id)a0;
+ (id)metadataDestinationIDsForCHRecentCall:(id)a0;
+ (id)metadataDestinationIDsForCHRecentCalls:(id)a0;

- (id)initWithHandle:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToMetadataDestinationID:(id)a0;
- (id)initWithDestinationID:(id)a0 isoCountryCode:(id)a1;

@end
