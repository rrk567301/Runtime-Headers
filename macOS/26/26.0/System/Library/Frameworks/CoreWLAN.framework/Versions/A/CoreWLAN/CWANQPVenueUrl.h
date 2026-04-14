@class NSArray;

@interface CWANQPVenueUrl : CWANQPElement <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *venueUrlList;


- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithNetwork:(id)a0 timestamp:(id)a1 anqpResult:(id)a2;

@end
