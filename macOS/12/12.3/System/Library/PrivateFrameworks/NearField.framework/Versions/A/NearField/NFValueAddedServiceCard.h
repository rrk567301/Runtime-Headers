@class NSData;

@interface NFValueAddedServiceCard : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *identifier;
@property BOOL userInterventionRequired;
@property int type;
@property (retain) NSData *token;
@property (retain) NSData *data;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)asDictionary;

@end
