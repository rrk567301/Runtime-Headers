@class NSArray;

@interface CWANQPVenueUrl : CWANQPElement <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *venueUrlList;


- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithNetwork:(id)a0 timestamp:(id)a1 anqpResult:(id)a2;

@end
