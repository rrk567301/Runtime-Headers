@class NSString, NSData;

@interface IDSGroupSessionConnectionParameters : NSObject

@property (copy, nonatomic) NSString *multiplexer;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) unsigned long long participantID;
@property (copy, nonatomic) NSData *salt;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)stringRepresentation;
- (id)initWithStringRepresentation:(id)a0;
- (char)isEqualToGroupSessionConnectionParameters:(id)a0;

@end
