@class NSURL, NSString;

@interface CLSEKParticipant : NSObject <NSCoding>

@property (readonly) long long participantStatus;
@property (readonly) NSURL *URL;
@property (readonly) NSString *emailAddress;
@property (readonly) NSString *name;
@property (readonly) char isCurrentUser;
@property (readonly) long long participantType;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEKParticipant:(id)a0;

@end
