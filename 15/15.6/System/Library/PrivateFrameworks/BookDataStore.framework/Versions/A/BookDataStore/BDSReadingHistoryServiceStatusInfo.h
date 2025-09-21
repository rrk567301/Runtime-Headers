@class BDSReadingHistoryServiceStatus;

@interface BDSReadingHistoryServiceStatusInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) BDSReadingHistoryServiceStatus *status;
@property (readonly, nonatomic) char isLoaded;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIsLoaded:(char)a0;

@end
