@class NSURL, EKParticipant, NSString;

@interface CalAttendee : NSObject <NSCopying>

@property (retain, nonatomic) EKParticipant *ekParticipant;
@property (readonly) NSURL *address;
@property (readonly) NSString *commonName;
@property (readonly) NSString *status;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithEKParticipant:(id)a0;

@end
