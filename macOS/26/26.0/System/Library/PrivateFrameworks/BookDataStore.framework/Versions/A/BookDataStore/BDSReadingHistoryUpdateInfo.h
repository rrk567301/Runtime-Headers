@class NSString, BDSReadingHistoryUpdate;

@interface BDSReadingHistoryUpdateInfo : NSObject <NSSecureCoding, NSSecureCoding, NSCoding>

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) BDSReadingHistoryUpdate *update;
@property (nonatomic, readonly) NSString *description;


- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithUpdate:(id)a0;

@end
