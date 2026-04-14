@class NSString, NSData;

@interface IDSGroupSessionConnectionParameters : NSObject

@property (copy, nonatomic) NSString *multiplexer;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) unsigned long long participantID;
@property (copy, nonatomic) NSData *salt;

- (id)description;
- (id)initWithStringRepresentation:(id)a0;
- (void).cxx_destruct;
- (id)stringRepresentation;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToGroupSessionConnectionParameters:(id)a0;

@end
