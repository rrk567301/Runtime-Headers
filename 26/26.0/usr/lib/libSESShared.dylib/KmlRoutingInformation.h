@class NSString, NSData;

@interface KmlRoutingInformation : NSObject

@property (readonly, nonatomic) NSString *manufacturer;
@property (readonly, nonatomic) NSString *regionString;
@property (readonly, nonatomic) NSString *brand;
@property (readonly, nonatomic) NSData *readerIdentifier;

- (void).cxx_destruct;
- (id)getReaderInformation;
- (id)getRoutingInformation;
- (id)initWithInformation:(id)a0 readerIdentifier:(id)a1;
- (id)initWithReaderInformation:(id)a0;

@end
