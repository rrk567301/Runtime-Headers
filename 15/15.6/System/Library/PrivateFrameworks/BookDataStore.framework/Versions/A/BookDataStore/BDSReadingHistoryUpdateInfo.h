@class NSString;

@interface BDSReadingHistoryUpdateInfo : NSObject <NSSecureCoding, NSSecureCoding, NSCoding>

@property (class, readonly) char supportsSecureCoding;
@property (class, nonatomic, readonly) char supportsSecureCoding;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ update;
@property (nonatomic, readonly) NSString *description;


- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUpdate:(id)a0;

@end
