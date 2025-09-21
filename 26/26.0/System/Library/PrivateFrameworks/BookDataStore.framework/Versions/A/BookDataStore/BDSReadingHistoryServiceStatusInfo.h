@class BDSReadingHistoryServiceStatus;

@interface BDSReadingHistoryServiceStatusInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BDSReadingHistoryServiceStatus *status;
@property (readonly, nonatomic) BOOL isLoaded;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIsLoaded:(BOOL)a0;

@end
