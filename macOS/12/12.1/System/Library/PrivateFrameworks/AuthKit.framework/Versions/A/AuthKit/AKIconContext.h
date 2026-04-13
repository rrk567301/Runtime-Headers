@class NSData, NSNumber;

@interface AKIconContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSNumber *scale;
@property (nonatomic) unsigned long long maskingStyle;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
