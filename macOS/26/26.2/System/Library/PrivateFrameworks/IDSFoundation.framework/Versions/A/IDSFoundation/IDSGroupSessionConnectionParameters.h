@class NSString, NSData;

@interface IDSGroupSessionConnectionParameters : NSObject

@property (copy, nonatomic) NSString *multiplexer;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) unsigned long long participantID;
@property (copy, nonatomic) NSData *salt;

- (id)initWithStringRepresentation:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)stringRepresentation;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqualToGroupSessionConnectionParameters:(id)a0;

@end
