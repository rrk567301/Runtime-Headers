@class NSString;

@interface CWANQPVenueNameEntry : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) NSString *name;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithVenueName:(id)a0 languageCode:(id)a1;

@end
