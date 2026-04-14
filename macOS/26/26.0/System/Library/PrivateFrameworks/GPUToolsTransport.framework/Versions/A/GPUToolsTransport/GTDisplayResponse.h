@class NSError;

@interface GTDisplayResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long requestID;
@property (retain, nonatomic) NSError *error;

- (void)encodeWithCoder:(id)a0;
- (id)initWithID:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
