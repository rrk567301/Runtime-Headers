@class NSData, NSArray;

@interface TransparencySelfValidationStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long status;
@property (retain) NSData *pushToken;
@property (retain) NSArray *loggableDatas;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithStatus:(unsigned long long)a0 pushToken:(id)a1;

@end
