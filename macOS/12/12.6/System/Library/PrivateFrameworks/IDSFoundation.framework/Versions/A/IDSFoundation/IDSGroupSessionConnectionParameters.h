@class NSString, NSData;

@interface IDSGroupSessionConnectionParameters : NSObject

@property (copy, nonatomic) NSString *multiplexer;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) unsigned long long participantID;
@property (copy, nonatomic) NSData *salt;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)stringRepresentation;
- (BOOL)isEqualToGroupSessionConnectionParameters:(id)a0;
- (id)initWithStringRepresentation:(id)a0;

@end
