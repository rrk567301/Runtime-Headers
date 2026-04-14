@class NSURL, EKParticipant, NSString;

@interface CalAttendee : NSObject <NSCopying>

@property (retain, nonatomic) EKParticipant *ekParticipant;
@property (readonly) NSURL *address;
@property (readonly) NSString *commonName;
@property (readonly) NSString *status;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithEKParticipant:(id)a0;

@end
