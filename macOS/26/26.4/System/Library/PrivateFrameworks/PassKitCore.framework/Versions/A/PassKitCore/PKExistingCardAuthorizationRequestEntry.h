@class NSString;

@interface PKExistingCardAuthorizationRequestEntry : NSObject

@property (readonly, nonatomic) NSString *passTypeIdentifier;
@property (readonly, nonatomic) NSString *passSerialNumber;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPassTypeIdentifier:(id)a0 passSerialNumber:(id)a1;

@end
