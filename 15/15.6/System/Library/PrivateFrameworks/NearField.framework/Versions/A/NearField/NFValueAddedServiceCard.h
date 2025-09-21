@class NSData;

@interface NFValueAddedServiceCard : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSData *identifier;
@property char userInterventionRequired;
@property int type;
@property (retain) NSData *token;
@property (retain) NSData *data;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)asDictionary;

@end
