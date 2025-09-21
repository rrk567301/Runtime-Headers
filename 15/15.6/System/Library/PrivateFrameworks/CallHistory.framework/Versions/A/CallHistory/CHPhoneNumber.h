@class NSString;

@interface CHPhoneNumber : CHLogger

@property (readonly, copy, nonatomic) NSString *digits;
@property (copy, nonatomic) NSString *isoCountryCode;
@property (nonatomic) char formattedRepresentationAttempted;
@property (nonatomic) char normalizedRepresentationAttempted;
@property (readonly, copy, nonatomic) NSString *formattedRepresentation;
@property (readonly, copy, nonatomic) NSString *normalizedRepresentation;

- (void).cxx_destruct;
- (id)initWithDigits:(id)a0 isoCountryCode:(id)a1;

@end
