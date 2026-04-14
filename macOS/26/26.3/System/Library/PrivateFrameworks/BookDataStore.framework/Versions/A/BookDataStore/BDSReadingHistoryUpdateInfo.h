@class NSString, BDSReadingHistoryUpdate;

@interface BDSReadingHistoryUpdateInfo : NSObject <NSSecureCoding, NSSecureCoding, NSCoding>

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) BDSReadingHistoryUpdate *update;
@property (nonatomic, readonly) NSString *description;


- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithUpdate:(id)a0;

@end
