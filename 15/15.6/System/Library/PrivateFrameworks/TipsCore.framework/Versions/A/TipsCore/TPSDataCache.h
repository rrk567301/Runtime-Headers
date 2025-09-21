@class NSString, NSDate;

@interface TPSDataCache : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char expired;
@property (nonatomic) unsigned long long cacheType;
@property (nonatomic) long long maxAge;
@property (nonatomic) unsigned long long fileSize;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *lastModified;
@property (retain, nonatomic) NSString *languageCode;
@property (retain, nonatomic) NSDate *updatedDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)expired;

@end
