@class NSString, NSArray, NSURL, NSDate, INSpeakableString, INDateComponentsRange;

@interface INReservation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) INDateComponentsRange *_duration;
@property (readonly, copy) INSpeakableString *itemReference;
@property (readonly, copy) NSString *reservationNumber;
@property (readonly, copy) NSDate *bookingTime;
@property (readonly) long long reservationStatus;
@property (readonly, copy) NSString *reservationHolderName;
@property (readonly, copy) NSArray *actions;
@property (readonly, copy) NSURL *URL;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)url;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithItemReference:(id)a0 reservationNumber:(id)a1 bookingTime:(id)a2 reservationStatus:(long long)a3 reservationHolderName:(id)a4 actions:(id)a5 URL:(id)a6;
- (id)initWithItemReference:(id)a0 reservationNumber:(id)a1 bookingTime:(id)a2 reservationStatus:(long long)a3 reservationHolderName:(id)a4 actions:(id)a5;

@end
