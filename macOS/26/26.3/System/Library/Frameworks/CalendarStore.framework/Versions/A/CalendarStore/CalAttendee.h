@class NSURL, EKParticipant, NSString;

@interface CalAttendee : NSObject <NSCopying>

@property (retain, nonatomic) EKParticipant *ekParticipant;
@property (readonly) NSURL *address;
@property (readonly) NSString *commonName;
@property (readonly) NSString *status;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithEKParticipant:(id)a0;

@end
