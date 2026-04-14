@class NSURL, EKParticipant, NSString;

@interface CalAttendee : NSObject <NSCopying>

@property (retain, nonatomic) EKParticipant *ekParticipant;
@property (readonly) NSURL *address;
@property (readonly) NSString *commonName;
@property (readonly) NSString *status;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithEKParticipant:(id)a0;

@end
