@class NSUUID, NSString;

@interface CLMiLoPlaceLabel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *placeIdentifier;
@property (readonly, nonatomic) NSString *placeAdditionalInformation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithPlaceIdentifier:(id)a0 placeAdditionalInformation:(id)a1;

@end
